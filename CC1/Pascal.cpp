// Author: Livia Johan
// File: Pascal.h

#include "Pascal.h"

int** input(int numRows)
{
	// initialize 2D array
	int** pascal = new int*[numRows*sizeof(int*)];

	
	for(int i = 0; i < numRows; ++i)
	{
		// create the row with size correlating with # of entries in that row
		int* row = new int[(i+1)*sizeof(int)];

		// default set the first element to 1
		row[0] = 1;
		
		// calculate sum of adjacent values in the previous row
		for(int j = 0; j < i; ++j)
		{
			if(i > 1)
			{
				row[j] = pascal[i-1][j-1] + pascal[i-1][j];
			}
		}

		// default set the last element of the row to 1
		row[i] = 1;

		// add this array to the 2D array
		pascal[i] = row;
		//delete row;
	}


	// print values
	for(int a = 0; a < numRows; ++a)
	{
		for(int b = 0; b < a+1; ++b)
		{
			COUT << pascal[a][b] << " ";
		}
		COUT << ENDL;
	}
	

	//COUT << pascal << ENDL;
	return pascal;
}



int search(int** pascal, int row, int col){

}
