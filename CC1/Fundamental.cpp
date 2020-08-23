#include "Pascal.cpp"

int main(){
	
	int numRows;
	int** triangle;
	COUT << "How many levels do you want to calculate: ";
	std::cin >> numRows;


	triangle = input(numRows);
	
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
