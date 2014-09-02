 OpenBLAS build complete. (BLAS CBLAS)

  OS               ... WINNT
  Architecture     ... x86_64
  BINARY           ... 64bit
  C compiler       ... GCC  (command line : gcc)
  Fortran compiler ... GFORTRAN  (command line : gfortran)
  Library Name     ... libopenblas_sandybridge-r0.2.11.a (Single threaded)


make -j4 BINARY=64 CC=gcc FC=gfortran \
TARGET=SANDYBRIDGE NO_LAPACK=1 \
NUM_THREADS=1 USE_THREAD=0
