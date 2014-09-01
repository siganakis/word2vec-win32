#if !defined _WIN32 && !defined _MSC_VER
# error("This file is only for win32/win64 and visual c++!")
#endif

#if defined _WIN64
#   define BLAS "../OpenBLAS-v0.2.11-Win64/lib/libopenblas.dll.a"
#else
#   define BLAS "../OpenBLAS-v0.2.11-Win32/lib/libopenblas.dll.a"
#endif
#pragma message ("linking to "BLAS)
#pragma comment(lib, BLAS)
