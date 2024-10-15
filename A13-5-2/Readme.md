## Version

```shell
cov-analyze --version
d59b675bea p-2024.6-push-53
```

## Reproduce steps

```shell
make check
```

## Observed behavior

Fake positive of A13-5-2

```shell
foo.cpp:6:39:
  1. autosar_cpp14_a13_5_2_violation: Defining conversion operator "ns::SI<9ul>::operator ns::SI<T1><10ul>() const" without "explicit".
```

## Excepted behavior

The function has already been marked as `explicit` (`template <size_t newRange> explicit operator SI<newRange>() const noexcept`), should be compliant
It seems the fake positive is due to the function is a template function
