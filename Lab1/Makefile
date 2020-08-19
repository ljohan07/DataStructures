
# Author: Livia Johan


PP := g++

FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)
PQCFLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
PQCXX    := -m64 -std=c++11 -Weffc++ $(PQCFLAGS)

#make Lab1a

Lab1aObjs := Lab1a.o

Lab1a: Lab1a.o
	$(PP) $(CXXFLAGS) -o Lab1a $(Lab1aObjs)
	./Lab1a

Lab1a.o: Lab1a.cpp
	$(PP) $(CXXFLAGS) -c Lab1a.cpp




# make Lab1b

Lab1bObjs := Lab1b.o

Lab1b: Lab1b.o
	$(PP) $(PQCXX) -o Lab1b $(Lab1bObjs)
	./Lab1b

Lab1b.o: Lab1b.cpp
	$(PP) $(PQCXX) -c Lab1b.cpp


# make Lab1c
Lab1cObjs := Lab1c.o

Lab1c: Lab1c.o
	$(PP) $(PQCXX) -o Lab1c $(Lab1cObjs)
	./Lab1c

Lab1c.o: Lab1c.cpp
	$(PP) $(PQCXX) -c Lab1c.cpp

# make clean
clean:
	rm -rf *.o Lab1a Lab1b Lab1c

