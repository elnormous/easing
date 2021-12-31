DEBUG=0
CXXFLAGS=-std=c++17 -Wall -Wextra -Wshadow -Werror -I../external/Catch2/single_include -I../include
SOURCES=main.cpp \
	easing_tests.cpp
BASE_NAMES=$(basename $(SOURCES))
OBJECTS=$(BASE_NAMES:=.o)
DEPENDENCIES=$(OBJECTS:.o=.d)
EXECUTABLE=test

all: $(EXECUTABLE)
ifeq ($(DEBUG),1)
all: CXXFLAGS+=-DDEBUG=1 -g
else
all: CXXFLAGS+=-O3
all: LDFLAGS+=-O3
endif
ifeq ($(DISABLE_SIMD),1)
all: CXXFLAGS+=-DOMATH_DISABLE_SIMD=1
endif

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) $(LDFLAGS) -o $@ -fprofile-arcs -ftest-coverage

-include $(DEPENDENCIES)

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) -MMD -MP $< -o $@ -fprofile-arcs -ftest-coverage

.PHONY: clean
clean:
ifeq ($(OS),Windows_NT)
	-del /f /q "$(EXECUTABLE).exe" $(OBJECTS) $(DEPENDENCIES) *.gcda *.gcno
else
	$(RM) $(EXECUTABLE) $(OBJECTS) $(DEPENDENCIES) $(EXECUTABLE).exe *.gcda *.gcno
endif