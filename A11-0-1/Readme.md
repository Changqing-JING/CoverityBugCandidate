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

Fake positive of A11-0-1

```shell
/home/jcq/workspace/cc-github/CoverityBugCandidate/A11-0-1/foo.cpp:7:9:
  1. autosar_cpp14_a11_0_1_violation: The "ns::ST::IM", a non-POD type, is not defined as class.
```

## Excepted behavior

The `ns::ST::IM" is a Union, it's should not be related to A11-0-1. Union and class have different semantic. So here should be no warning
