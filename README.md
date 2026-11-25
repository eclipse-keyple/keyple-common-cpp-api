# Keyple Common C++ API

## Overview

The **Keyple Common C++ API** contains the interfaces of the objects that are involved in the public interactions of the different Keyple components.

## Documentation & Contribution Guide

The full documentation, including the **user guide**, **download information** and **contribution guide**, is available on the Keyple website [keyple.org](https://keyple.org).

## API documentation

API documentation & class diagram is available online: [docs.keyple.org/keyple-common-cpp-api](https://docs.keyple.org/keyple-common-cpp-api)


## Building with Conan

This repository is packaged as a [Conan](https://conan.io/) recipe (`conanfile.py`), providing the `Keyple::Common`
CMake target as `keyple-common-cpp-api`. Downstream keyple recipes should consume it with a regular
`self.requires("keyple-common-cpp-api/2.0.2")` instead of `FetchContent`.

The unit test suite is opt-in via the `with_tests` option (default `False`), so consumers of the package don't pay
for compiling GoogleTest.

### Local development

Use `conan build` to configure/compile in-tree, in a regular `build/` folder you can inspect, rerun and debug
against (and which generates a `CMakeUserPresets.json` for IDE integration). The build type defaults to `Release`;
pass `-s build_type=Debug` for a debug build, which lands in its own `build/Debug` subfolder alongside `build/Release`:

```bash
# Release build, with the unit test suite, under ./build/Release
conan build . -o with_tests=True --build=missing

# Debug build, under ./build/Debug
conan build . -o with_tests=True -s build_type=Debug --build=missing

# Re-run the tests directly afterwards
./build/Release/bin/keyplecommoncppapi_ut
./build/Debug/bin/keyplecommoncppapi_ut
```

### Packaging to the local cache

Use `conan create` to export the recipe and package to your local Conan cache, for consumption by other
recipes/repos (no remote upload involved):

```bash
# Build and export the package to the local cache
conan create . --build=missing

# Same, but also build and run the unit test suite as part of the recipe build
conan create . -o with_tests=True --build=missing

# Package a Debug build instead (build_type defaults to Release)
conan create . -o with_tests=True -s build_type=Debug --build=missing
```

### Conan profile

Builds use your default Conan profile. If you don't have one yet, create it with:

```bash
conan profile detect
```

## About the source code

The code is built with different flavours of **GCC, CLang and MSVC ** in order to address a wide range of applications.
