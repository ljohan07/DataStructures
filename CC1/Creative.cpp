// Author: Livia Johan
// File: Creative.cpp

#include "CreativeFunctions.cpp"

int main(){
	
	int numRows;
	int** pascal;
	COUT << "How many levels do you want to calculate: ";
	CIN>> numRows;

	// create a Pascal's Triangle
	pascal = input(numRows);
	// prints the triangle
	print_triangle(pascal, numRows);

	COUT << ENDL;

	// Creative portion
	
	// Calculates nCk
	getCombos(pascal, numRows);
	// Calculates possible number of combinations given a user-provided number of options
	totalCombos(pascal, numRows);
	
	
	delete pascal;
	return 0;
}
