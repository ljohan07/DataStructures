

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)
PQCFLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
PQCXX    := -m64 -std=c++11 -Weffc++ $(PQCFLAGS)


# Command: make Fundamental
FundamentalObjs :=  Fundamental.o

Fundamental: Fundamental.o
	$(PP) $(PQCXX) -o Fundamental $(FundamentalObjs)
	./Fundamental

Fundamental.o: Fundamental.cpp
	$(PP) $(PQCXX) -c Fundamental.cpp


# Command: make Creative
CreativeObjs :=  Creative.o

Creative: Creative.o
	$(PP) $(PQCXX) -o Creative $(CreativeObjs)
	./Creative

Creative.o: Creative.cpp
	$(PP) $(PQCXX) -c Creative.cpp

# make clean
clean:
	rm -rf *.o Fundamental Creative
