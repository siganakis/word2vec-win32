#ifndef BLAS_H
#define BLAS_H

#if !defined _WIN32
#   error("This file is only for win32/win64!")
#endif

#if defined _WIN64
#   include "OpenBLAS-v0.2.11-Win64/include/cblas.h"
#else
#   include "OpenBLAS-v0.2.11-Win32/include/cblas.h"
#endif
#define scopy cblas_scopy
#define saxpy cblas_saxpy
#define sdot cblas_sdot

#endif /* BLAS_H */
