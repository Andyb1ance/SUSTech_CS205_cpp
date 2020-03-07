# lecture 1

## Cpp preprocessor

transforms source code, prior to compilation

- source-file inclusion: another file
  - #include <iosteam\>
  - #include "iosteam"
- defining macros: replacement, anything
  - #define getmax(a,b) a>b?a:b
  - \# mkstr and ## concat
- conditional compilation: some code
  - #if... #elif ... #else... #endif

## Header Filenames

- Reason: tedious to declare every function you want to use in a different file
- end in .h or no extension or c prefix
  - iostream.h, iostream, cmath

## Namespaces

- simplify the writing of large programs
- combine pre-existing code
- indicate which you want using ::
- example: std
  - using namespace std
  - using std::cout;

## Function

- prototype
- definition
