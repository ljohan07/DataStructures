// Author: Livia Johan
// File: Pascal.h


#include <cstdlib>
#include <iostream>

#define COUT std::cout
#define ENDL std::endl

int** input(int numRows);

int search(int** pascal, int row, int col);
