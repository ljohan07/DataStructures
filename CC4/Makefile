# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CFLAGS := -std=c11 $(FLAGS)
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

# Variables for Folders
include := include
SRC := src
EXE := exe
OBJ := obj

# Command: make Prob1
Prob1Objs :=  $(OBJ)/Prob1.o

Prob1: $(Prob1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob1 $(Prob1Objs)
	$(EXE)/./Prob1

$(OBJ)/Prob1.o: $(SRC)/Prob1.cpp $(include)/queue.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob1.cpp -o $@

# Command: make Prob2
Prob2Objs :=  $(OBJ)/Prob2.o

Prob2: $(Prob2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob2 $(Prob2Objs)
	$(EXE)/./Prob2

$(OBJ)/Prob2.o: $(SRC)/Prob2.cpp $(include)/queue.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob2.cpp -o $@



# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize:
	mkdir $(OBJ) $(EXE)

# make all
all: Prob1 Prob2

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
