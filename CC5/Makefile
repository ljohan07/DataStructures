# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CFLAGS := -std=c11 $(FLAGS)
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

# Variables for Folders
INC := include
SRC := src
EXE := exe
OBJ := obj

# Command: make PQ
PQObjs :=  $(OBJ)/PQ.o

PQ: $(PQObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/PQ $(PQObjs)
	$(EXE)/./PQ

$(OBJ)/PQ.o: $(SRC)/PQTest.cpp $(INC)/Priority.h $(INC)/PriorityQueue.h
	$(PP) $(CXXFLAGS) -c $(SRC)/PQTest.cpp -o $@


# Command: make SorDLL
# Derived Classes for First Inheritance Example
#SorDLLTestObjs := $(OBJ)/SorDLLTest.o $(OBJ)/SorDLList.o $(OBJ)/DLList.o
SorDLLTestObjs := $(OBJ)/SorDLLTest.o

SorDLLTest: $(SorDLLTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/SorDLLTest $(SorDLLTestObjs)
	$(EXE)/./SorDLLTest 10 25 12 10 44 88 7 27 87 4 2


# SorDLLTest.cpp class both derived classes
$(OBJ)/SorDLLTest.o: $(SRC)/SorDLLTest.cpp $(INC)/SorDLList.h
	$(PP) $(CXXFLAGS) -c $(SRC)/SorDLLTest.cpp -o $@

# SorDLList inherits DLL
$(OBJ)/SorDLList.o: $(INC)/SorDLList.h $(INC)/DLList.h
	$(PP) $(CXXFLAGS) -c $(INC)/SorDLList.h -o $@

$(OBJ)/DLList.o: $(INC)/DLList.h
	$(PP) $(CXXFLAGS) -c $(INC)/DLList.h -o $@





# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize:
	mkdir $(OBJ) $(EXE)

# make all
all: PQ

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
