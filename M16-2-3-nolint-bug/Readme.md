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

Can't suppress M16-2-3 by `// coverity[autosar_cpp14_m16_2_3_violation]`

```shell
foo.hpp:1:
  1. autosar_cpp14_m16_2_3_violation: Header files should be guarded against multiple inclusion. (Cause: guard macro not #define'd)
```

## Excepted behavior

since `// coverity[autosar_cpp14_m16_2_3_violation]` is applied, this violation should be suppressed. No warning should be shown.
