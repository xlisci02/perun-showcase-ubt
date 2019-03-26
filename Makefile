src=src
build=build
CC=gcc
CFLAGS= --coverage 

.PHONY : all
all: ubt

run: all
	./ubt

ubt: ubt.o main.o
	$(CC) $(CFLAGS) $(build)/ubt.o $(build)/main.o -o ubt -lm 

ubt.o:
	$(CC) $(CFLAGS) -c $(src)/ubt.c -o $(build)/ubt.o 

main.o:
	$(CC) $(CFLAGS) -c $(src)/main.c -o $(build)/main.o 

.PHONY : clean
clean:
	rm $(build)/*
	rm ubt
