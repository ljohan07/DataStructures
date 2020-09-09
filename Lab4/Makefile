# Author: Livia Johan
# File: Makefile

#is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course


FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


INC := include
SRC := src
OBJ := obj
EXE := exe


# Command: make Lab4

Lab4Objs := $(OBJ)/Lab4.o

Lab4: $(Lab4Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Lab4 $(Lab4Objs)
	$(EXE)/./Lab4


$(OBJ)/Lab4.o: $(SRC)/Lab4.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Lab4.cpp -o $@

# command: make initialize

initialize:
	mkdir $(OBJ) $(EXE)

# command: make clean

clean:
	rm -rf *.o $(OBJ)/* $(EXE)/*
