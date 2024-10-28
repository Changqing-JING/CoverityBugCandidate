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

Fake negative of M16-2-3

No violation about M16-2-3 is shown

## Excepted behavior

The foo.hpp doesn't contain any include guard. It should violate M16-2-3
