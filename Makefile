CC = gcc
CFLAGS = -O2 -Wall -funroll-loops
TARGET = Win64
ifeq ($(TARGET),Win32)
	BLAS = OpenBLAS-v0.2.11-Win32/lib/libopenblas.dll.a
else ifeq ($(TARGET),Win64)
	BLAS = OpenBLAS-v0.2.11-Win64/lib/libopenblas.dll.a
else
	BLAS = $(error invalid TARGET, TARGET can be "Win32/Win64")
endif

all: word2vec word2phrase distance word-analogy compute-accuracy
word2vec : word2vec.c
	$(CC) word2vec.c -o word2vec $(CFLAGS) $(BLAS)
word2phrase : word2phrase.c
	$(CC) word2phrase.c -o word2phrase $(CFLAGS)
distance : distance.c
	$(CC) distance.c -o distance $(CFLAGS)
word-analogy : word-analogy.c
	$(CC) word-analogy.c -o word-analogy $(CFLAGS)
compute-accuracy : compute-accuracy.c
	$(CC) compute-accuracy.c -o compute-accuracy $(CFLAGS)
clean:
	rm -f word2vec.exe word2phrase.exe distance.exe word-analogy.exe compute-accuracy.exe
