SRC=Nodo.cpp \
	Arbol.cpp
OBJ=Nodo.o \
	Arbol.o 

all:
	g++ -c -std=c++14 ${SRC}
	g++ ${OBJ} main.cpp -o main