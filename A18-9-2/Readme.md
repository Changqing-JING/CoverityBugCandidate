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

Fake positive of A18-9-2

```shell
/home/jcq/workspace/cc-github/CoverityBugCandidate/A18-9-2/foo.cpp:4:35:
  1. autosar_cpp14_a18_9_2_violation: Forwarding rvalue reference "other" without using "std::move".
```

## Excepted behavior

The `other` is not `Forwarding values to other functions`, so this code should not be related to A18-9-2
