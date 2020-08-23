// Author: Livia Johan
// File: Pascal.h


#include <cstdlib>
#include <iostream>

#define COUT std::cout
#define CIN std::cin
#define ENDL std::endl

int** input(int numRows);

void print_triangle(int** pascal, int numRows);

void search(int** pascal, int numRows);
