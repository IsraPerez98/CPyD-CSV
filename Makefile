CC=gcc
CFLAGS=-Wall -g3
LDFLAGS=-lm
OBJECTOS=main.o
MKDIR=mkdir -p
DEL=rm -fr

all: $(OBJECTOS)
	$(MKDIR) bin
	$(CC) $(CFLAGS) -o bin/app $(OBJECTOS) $(LDFLAGS)

clean:
	$(DEL) *.o app bin/

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

.PHONY: all