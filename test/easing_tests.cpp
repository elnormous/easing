#include "catch2/catch.hpp"
#include "Easing.hpp"

TEST_CASE("Ease in", "ease")
{
    for (int i = 0; i < 100; ++i)
    {
        const auto t = float(i) / 100.0F;

        REQUIRE(easing::ease(easing::Func::sine, easing::Mode::easeIn, t) == Approx{easing::sineIn(t)});
        REQUIRE(easing::ease(easing::Func::quad, easing::Mode::easeIn, t) == Approx{easing::quadIn(t)});
        REQUIRE(easing::ease(easing::Func::cubic, easing::Mode::easeIn, t) == Approx{easing::cubicIn(t)});
        REQUIRE(easing::ease(easing::Func::quart, easing::Mode::easeIn, t) == Approx{easing::quartIn(t)});
        REQUIRE(easing::ease(easing::Func::quint, easing::Mode::easeIn, t) == Approx{easing::quintIn(t)});
        REQUIRE(easing::ease(easing::Func::expo, easing::Mode::easeIn, t) == Approx{easing::expoIn(t)});
        REQUIRE(easing::ease(easing::Func::circ, easing::Mode::easeIn, t) == Approx{easing::circIn(t)});
        REQUIRE(easing::ease(easing::Func::back, easing::Mode::easeIn, t) == Approx{easing::backIn(t)});
        REQUIRE(easing::ease(easing::Func::elastic, easing::Mode::easeIn, t) == Approx{easing::elasticIn(t)});
        REQUIRE(easing::ease(easing::Func::bounce, easing::Mode::easeIn, t) == Approx{easing::bounceIn(t)});
    }
}

TEST_CASE("Ease out", "ease")
{
    for (int i = 0; i < 100; ++i)
    {
        const auto t = float(i) / 100.0F;

        REQUIRE(easing::ease(easing::Func::sine, easing::Mode::easeOut, t) == Approx{easing::sineOut(t)});
        REQUIRE(easing::ease(easing::Func::quad, easing::Mode::easeOut, t) == Approx{easing::quadOut(t)});
        REQUIRE(easing::ease(easing::Func::cubic, easing::Mode::easeOut, t) == Approx{easing::cubicOut(t)});
        REQUIRE(easing::ease(easing::Func::quart, easing::Mode::easeOut, t) == Approx{easing::quartOut(t)});
        REQUIRE(easing::ease(easing::Func::quint, easing::Mode::easeOut, t) == Approx{easing::quintOut(t)});
        REQUIRE(easing::ease(easing::Func::expo, easing::Mode::easeOut, t) == Approx{easing::expoOut(t)});
        REQUIRE(easing::ease(easing::Func::circ, easing::Mode::easeOut, t) == Approx{easing::circOut(t)});
        REQUIRE(easing::ease(easing::Func::back, easing::Mode::easeOut, t) == Approx{easing::backOut(t)});
        REQUIRE(easing::ease(easing::Func::elastic, easing::Mode::easeOut, t) == Approx{easing::elasticOut(t)});
        REQUIRE(easing::ease(easing::Func::bounce, easing::Mode::easeOut, t) == Approx{easing::bounceOut(t)});
    }
}

TEST_CASE("Ease in out", "ease")
{

    for (int i = 0; i < 100; ++i)
    {
        const auto t = float(i) / 100.0F;

        REQUIRE(easing::ease(easing::Func::sine, easing::Mode::easeInOut, t) == Approx{easing::sineInOut(t)});
        REQUIRE(easing::ease(easing::Func::quad, easing::Mode::easeInOut, t) == Approx{easing::quadInOut(t)});
        REQUIRE(easing::ease(easing::Func::cubic, easing::Mode::easeInOut, t) == Approx{easing::cubicInOut(t)});
        REQUIRE(easing::ease(easing::Func::quart, easing::Mode::easeInOut, t) == Approx{easing::quartInOut(t)});
        REQUIRE(easing::ease(easing::Func::quint, easing::Mode::easeInOut, t) == Approx{easing::quintInOut(t)});
        REQUIRE(easing::ease(easing::Func::expo, easing::Mode::easeInOut, t) == Approx{easing::expoInOut(t)});
        REQUIRE(easing::ease(easing::Func::circ, easing::Mode::easeInOut, t) == Approx{easing::circInOut(t)});
        REQUIRE(easing::ease(easing::Func::back, easing::Mode::easeInOut, t) == Approx{easing::backInOut(t)});
        REQUIRE(easing::ease(easing::Func::elastic, easing::Mode::easeInOut, t) == Approx{easing::elasticInOut(t)});
        REQUIRE(easing::ease(easing::Func::bounce, easing::Mode::easeInOut, t) == Approx{easing::bounceInOut(t)});
    }
}
