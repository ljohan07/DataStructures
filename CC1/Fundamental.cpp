#include "Pascal.cpp"

int main(){
	
	int numRows;
	int** pascal;
	COUT << "How many levels do you want to calculate: ";
	CIN>> numRows;


	pascal = input(numRows);
	print_triangle(pascal, numRows);
	search(pascal, numRows);
	
	delete pascal;	

	return 0;
}
