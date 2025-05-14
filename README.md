# Run Instructions

## MacOS

Must have CMake installed. If not `brew install cmake`.

Clone the repo and:

```bash
cmake -B build
cmake --build build
```

## Windows 

Must have MSYS2 and MinGW. Within MSYS2:

```bash
pacman -Syu
pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-cmake make
```

After that you may clone the repo and:

```bash
cmake -B build
cmake --build build
```

## Linux

Figure it out yourself.

```bash
cmake -B build
cmake --build build
```
