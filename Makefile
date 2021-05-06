CC=g++
CFLAGS=-Wall -g3 -std=c++17
LDFLAGS=-lm
OBJECTOS=main.o leeryescribir.o funciones.o utils.o
MKDIR=mkdir -p
DEL=rm -fr

all: $(OBJECTOS)
	$(MKDIR) bin
	$(CC) $(CFLAGS) -o bin/app $(OBJECTOS) $(LDFLAGS)

clean:
	$(DEL) *.o app bin/

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

leeryescribir.o: leeryescribir.h leeryescribir.cpp
	$(CC) $(CFLAGS) -c leeryescribir.cpp

funciones.o: funciones.h funciones.cpp
	$(CC) $(CFLAGS) -c funciones.cpp

utils.o: utils.h utils.cpp
	$(CC) $(CFLAGS) -c utils.cpp

.PHONY: all