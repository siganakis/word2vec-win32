#if !defined _WIN32 && !defined _MSC_VER
# error("This file is only for win32/win64 and visual c++!")
#endif

#define BLAS "../OpenBLAS-x86_64-sandybridge-st/lib/libopenblas.a"
#pragma message ("linking to "BLAS)
#pragma comment(lib, BLAS)
