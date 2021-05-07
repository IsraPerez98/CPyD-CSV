CXX=g++
CXXFLAGS=-Wall -g3 -std=c++17
LDFLAGS=-lm
OBJECTOS=main.o leeryescribir.o funciones.o utils.o
MKDIR=mkdir -p
DEL=rm -fr

all: $(OBJECTOS)
	$(MKDIR) bin
	$(CXX) $(CXXFLAGS) -o bin/app $(OBJECTOS) $(LDFLAGS)

clean:
	$(DEL) *.o app bin/

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

leeryescribir.o: leeryescribir.h leeryescribir.cpp
	$(CXX) $(CXXFLAGS) -c leeryescribir.cpp

funciones.o: funciones.h funciones.cpp
	$(CXX) $(CXXFLAGS) -c funciones.cpp

utils.o: utils.h utils.cpp
	$(CXX) $(CXXFLAGS) -c utils.cpp

.PHONY: all