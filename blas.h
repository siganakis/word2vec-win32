#ifndef BLAS_H
#define BLAS_H

#if !defined _WIN32
#   error("This file is only for win32/win64!")
#endif

#include "OpenBLAS-x86_64-sandybridge-st/include/cblas.h"
#define scopy cblas_scopy
#define saxpy cblas_saxpy
#define sdot cblas_sdot

#endif /* BLAS_H */
