// Author: Livia Johan
// File: Fundamental.h

#include "Pascal.cpp"

int main(){
	
	int numRows;
	int** pascal;
	COUT << "How many levels do you want to calculate: ";
	CIN>> numRows;

	// creates Pascal's Triangle
	pascal = input(numRows);
	// prints triangle
	print_triangle(pascal, numRows);
	// looks for value in user-provided row and column
	search(pascal, numRows);
	
	delete pascal;	

	return 0;
}
