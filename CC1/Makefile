

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)
PQCFLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
PQCXX    := -m64 -std=c++11 -Weffc++ $(PQCFLAGS)


# classBadPQC Example
# Command: make classBadPQC
FundamentalObjs :=  Fundamental.o

Fundamental: Fundamental.o
	$(PP) $(PQCXX) -o Fundamental $(FundamentalObjs)
	./Fundamental

Fundamental.o: Fundamental.cpp
	$(PP) $(PQCXX) -c Fundamental.cpp


# make clean
clean:
	rm -rf *.o Fundamental
