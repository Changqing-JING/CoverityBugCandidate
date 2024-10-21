## Version

```shell
cov-analyze --version
d59b675bea p-2024.6-push-53
```

## Reproduce steps

```shell
make check
```

## Host ENV

Ubuntu 24.04

```shell
gcc --version
gcc (Ubuntu 13.2.0-23ubuntu4) 13.2.0
Copyright (C) 2023 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

## Observed behavior

Fake positive of A16-2-3

```shell
foo.cpp:6:6:
  Type: AUTOSAR C++14 Preprocessing Directives (AUTOSAR C++14 A16-2-3, Required)

foo.cpp:6:6:
  autosar_cpp14_a16_2_3_violation: Symbol "stringstream" is used without an explicit "include".
/usr/include/c++/13/iosfwd:158:
  expected_include: Symbol "stringstream" is declared in file "iosfwd".

foo.cpp:8:13:
  Type: AUTOSAR C++14 Preprocessing Directives (AUTOSAR C++14 A16-2-3, Required)

foo.cpp:8:13:
  autosar_cpp14_a16_2_3_violation: Symbol "PROT_READ" is used without an explicit "include".
/usr/include/asm-generic/mman-common.h:10:
  expected_include: Symbol "PROT_READ" is declared in file "mman-common.h".
```

## Excepted behavior

1. `std::stringstream` is defined in `<sstream>`. So the line 6 should be compliant. See https://cplusplus.com/reference/sstream/stringstream/

2. `PROT_READ` is defined in `<sys/mman.h>`. So the line 8 should be compliant. See https://man7.org/linux/man-pages/man2/mmap.2.html
