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

Fake positive of A8-4-9

```
foo.cpp:11:1:
autosar_cpp14_a8_4_9_violation: The in-out parameter "st" is not modified
```

## Excepted behavior

A8-4-9 should be a "may" analyze, not must analyze. Variable `st` is modified in one control flow path, this variable should be regarded as "modified"
