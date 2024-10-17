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

Fake positive of M5-3-1

```shell
foo.cpp:9:39:
  1. autosar_cpp14_m5_3_1_violation: Operand "this->z" of the operator "!" is not bool type.
```

## Excepted behavior

`z` is `bool const` type, so this code should be compliant
