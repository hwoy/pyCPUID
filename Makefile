CC=gcc
CFLAGS=-O2 -std=c99 -pedantic -Wall -Wno-uninitialized
BIN=xcpuid.exe

.PHONY: all clean

all: $(BIN)

clean:
	rm -rf *.o $(BIN)

$(BIN): main.o CPUID.o
	$(CC) -o $(BIN) main.o CPUID.o


CPUID.o: CPUID.c CPUID.h
main.o: main.c main.h CPUID.h flagsdata.h
