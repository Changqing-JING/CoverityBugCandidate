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

Fake positive of A9-6-1

```shell
/home/jcq/workspace/cc-github/CoverityBugCandidate/A9-6-1/foo.cpp:4:13:
  1. autosar_cpp14_a9_6_1_violation: The field "a" has type defined without sizes.
```

## Excepted behavior

filed `a` is just a pointer. It should not be related to checker A9-6-1
