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

Fake positive of M7-5-2

```shell
foo.cpp:13:23:
  1. autosar_cpp14_m7_5_2_violation: Escaping local address "ns::goo(&ns::C1::x)" to a variable declared outside of the block statement.
```

## Excepted behavior

The code should be compliant. Coverity only reports warning when the `C1::x` is `thread_local`. This bug may be related the the `thread_local`.
