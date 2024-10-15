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

Fake positive of A6-4-1

```shell
foo.cpp:5:3:
1. autosar_cpp14_a6_4_1_violation: Switch statement "switch (em)" has less than two case-clauses, distinct from the default label.
```

## Excepted behavior

The `switch` statement in code has 3 `case`, should be compliant
