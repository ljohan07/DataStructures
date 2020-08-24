#include "CreativeFunctions.cpp"

int main(){
	
	int numRows;
	int** pascal;
	//int* nck;
	COUT << "How many levels do you want to calculate: ";
	CIN>> numRows;


	pascal = input(numRows);
	print_triangle(pascal, numRows);

	COUT << ENDL;

	// Creative portion
	//nck = getChoose(numRows);
	getCombos(pascal, numRows);
	totalCombos(pascal, numRows);
	
	
	delete pascal;
	//delete nck;
	return 0;
}
