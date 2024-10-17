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

Fake positive of A2-10-5

```shell
foo.cpp:3:40:
  1. autosar_cpp14_a2_10_5_violation: Identifier "goo" is already used to represent a function with static storage duration.
foo.cpp:3:40:
  2. static_storage_symbol: Declaring a static storage duration function with identifier "goo".
```

## Excepted behavior

The function name `goo` is only defined once. This code should be compliant. This fake positive seems caused by bug during analysis template functions.
