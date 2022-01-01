# Header-only easing library

The library contains the following easing functions with in, out, and in-out modes:

* sine
* quad
* cubic
* quart
* quint
* expo
* circ
* back
* elastic
* bounce

# Usage

You can call a generic ease function:

```cpp
const auto newValue = easing::ease(easing::Func::sine, easing::Mode::easeIn, value);
```

Or you can call the easing functions directly:

```cpp
const auto newValue = easing::sineIn(value);
```

## License

Easing libray's codebase is released to the Public Domain