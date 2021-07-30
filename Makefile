CC=gcc
CFLAGS=-O2 -Wall -std=c11 -pipe

invmanage: main.c
	$(CC) main.c -o invmanage

clean:
	rm invmanage
