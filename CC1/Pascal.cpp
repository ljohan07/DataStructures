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
		for(int j = 0; j < numRows; ++j)
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


	return pascal;
}

void print_triangle(int** pascal, int numRows)
{
	for(int i = 0; i < numRows; ++i)
	{
		for(int j = 0; j < i+1; ++j)
		{
			COUT << pascal[i][j] << " ";
		}
		COUT << ENDL;
	}
	
}


void search(int** pascal, int numRows)
{
	bool cont = true;
	int row;
	int col;
	char char_cont;

	while(cont)
	{
		COUT << "Enter a row and column value to print [two numbers only]: ";
		CIN >> row;
		CIN >> col;
		if(row > numRows)
		{
			COUT << row << " is not a valid row" << ENDL;
		}
		else if(col > row)
		{
			COUT << col << " is not a valid column in row " << row << ENDL;
		}
		else
		{
			COUT << pascal[row-1][col-1] << ENDL;
		}

		


		COUT << "Continue? [y/n]: ";
		CIN >> char_cont;
		if(char_cont == 'n')
		{
			cont = false;
			COUT << ENDL << "Exiting program..." << ENDL << ENDL;
		}
	}



}
