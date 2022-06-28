BF_NAME=hanoi

all: build transpile buildbf run

build:
	clang -D NO_OPTIMIZE_MAD -Wno-everything bfc.c -o bfc

printir:
	./bfc -emit-ir ~/llvmTest/progs/$(BF_NAME).bf

transpile:
	./bfc -o ~/llvmTest/progs/$(BF_NAME).c ~/llvmTest/progs/$(BF_NAME).bf

interpret:
	./bfc -I ~/llvmTest/progs/$(BF_NAME).bf

#had to add -march=native and -O3 because it was really slow without it
buildbf:
	clang -march=native -O3 -o ~/llvmTest/progs/$(BF_NAME) ~/llvmTest/progs/$(BF_NAME).c

run:
	~/llvmTest/progs/$(BF_NAME)

