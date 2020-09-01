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


# Command: make Lab3

Lab3Objs := $(OBJ)/Lab3.o

Lab3: $(Lab3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Lab3 $(Lab3Objs)
	$(EXE)/./Lab3


$(OBJ)/Lab3.o: $(SRC)/Lab3.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Lab3.cpp -o $@

# command: make initialize

initialize:
	mkdir $(OBJ) $(EXE)

# command: make clean

clean:
	rm -rf *.o $(OBJ)/* $(EXE)/*


