all:skiplist

CFLAGS=-g -O0 -Wall

skiplist:skiplist.o test.o

skiplist.o:skiplist.h skiplist.c

test.o:test.c

.PHONY:clean

clean:
	rm *.o skiplist
