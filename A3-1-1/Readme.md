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

Fake positive of A3-1-1

```shell
foo.hpp:6:21:
  1. partial_definition: "Bar::work()" is partially defined here.
foo.cpp:3:9:
  2. autosar_cpp14_a3_1_1_violation: "Bar::work()" is partially defined in a header file.
```

## Excepted behavior

The code should be compliant. In foo.cpp:3:9, `ST Bar::work()` return a ST instance, but there is not global objects or functions that occupy storage. 
