#include "Pascal.cpp"

int main(){
	
	int numRows;
	int** pascal;
	COUT << "How many levels do you want to calculate: ";
	CIN>> numRows;


	pascal = input(numRows);
	print_triangle(pascal, numRows);
	search(pascal, numRows);
	
	
	//for(int i = 0; i < numRows; ++i)
	/*{
		for(int j = 0; j < i; j++)
		{
			COUT << triangle[i][j];
		}
		COUT << ENDL;
	}
	*/

	return 0;
}
