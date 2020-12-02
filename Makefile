CC=gcc
CFLAGS=-Wall -I.

main: main.o
	$(CC) $(CFLAGS) -o main main.o

.PHONY: clean

clean:
	rm -f main main.o
