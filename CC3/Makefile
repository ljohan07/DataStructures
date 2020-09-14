# Author: Livia Johan
# File: Makefile for CC3

PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

# Variables for Folders
INC := include
SRC := src
OBJ := obj
EXE := exe

#make Fundamental
FundamentalObjs := $(OBJ)/Fundamental.o
Fundamental: $(FundamentalObjs) ; $(PP) $(CXXFLAGS) -o $(EXE)/Fundamental $(FundamentalObjs) ; $(EXE)/./Fundamental
$(OBJ)/Fundamental.o: $(SRC)/Fundamental.cpp $(SRC)/Fundamental.cpp $(INC)/DoubleHash.h $(INC)/LinearProbe.h ; $(PP) $(CXXFLAGS) -c $(SRC)/Fundamental.cpp -o $@

#make Creative
CreativeObjs := $(OBJ)/Creative.o

Creative: $(CreativeObjs) ; $(PP) $(CXXFLAGS) -o $(EXE)/Creative $(CreativeObjs) ; $(EXE)/./Creative

$(OBJ)/Creative.o: $(SRC)/Creative.cpp $(SRC)/Creative.h $(INC)/DoubleHash.h $(INC)/LinearProbe.h ; $(PP) $(CXXFLAGS) -c $(SRC)/Creative.cpp -o $@

# make initialize
initialize: ; mkdir obj exe


# make clean
clean: ; rm -rf *.o $(OBJ)/* $(EXE)/*






