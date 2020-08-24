// Author: Livia Johan
// File: CreativeFunctions.cpp

#include "Creative.h"

int* getChoose(int numRows)
{
	// int* to hold values n(index 0) and k(index 1)
	int* nck = new int[2];
	
	// bools to check if n and k are valid
	bool goodN = false;
	bool goodK = false;
	int n;
	int k;

	COUT << "To calculate nCk (n choose k):" << ENDL;

	// prompts user for n value until they input a valid number
	while(!goodN)
	{
		COUT << "What is n? ";
		CIN >> n; 

		if(n >= numRows)
		{
			COUT << n << " is not a valid n. Try again." << ENDL;
			
		}
		else
		{
			goodN = true;
			nck[0] = n;
		}

	}

	// prompts user for k value until they input a valid number
	while(!goodK)
	{
		COUT << "What is k? ";
		CIN >> k;

		if(k > n)
		{
			COUT << k << " is not a valid k. Try again." << ENDL;
			
		}
		else if(k <= n)
		{
			goodK = true;
			nck[1] = k;
		}
	}



	COUT << ENDL;
	return nck;
}

void getCombos(int** pascal, int numRows)
{
	// variables used in asking whether or not the user wants to continue
	bool cont = true;
	char char_cont;


	while(cont)
	{
		// create int* holding values of n and k
		int* nck = getChoose(numRows);

		// calculates the value of n choose k
		COUT << "Calculating " << nck[0] << " choose " << nck[1] << "..." << ENDL;
		int chosen = pascal[nck[0]][nck[1]];
		COUT << nck[0] << " choose " << nck[1] << " is " << chosen << ENDL << ENDL;

		// checks if the user will continue calculating n choose k
		COUT << "Continue? [y/n]: ";
		CIN >> char_cont;
		while(char_cont != 'y' && char_cont != 'n')
		{
			COUT << "Not valid. Continue? [y/n]: ";
			CIN >> char_cont;
		}
		if(char_cont == 'n')
		{
			cont = false;
			COUT << ENDL << "Exiting program..." << ENDL << ENDL;
		}
		COUT << ENDL;
	}
}

void totalCombos(int** pascal, int numRows)
{
	// variables to check whether desired row (# of options) is valid
	int row;
	bool goodRow = false;

	// variables to check whether the user wants to continue calculations
	bool cont = true;
	char char_cont;



	while(cont)
	{
		// prompts the user for a valid row until an appropriate value is given
		while(!goodRow)
		{
			COUT << "How many options would you like to calculate the # of combinations for? ";
			CIN >> row;
			if(row > (numRows-1))
			{
				COUT << row << " is not a valid # of combinations for this triangle. Try again." << ENDL;
			}
			else
			{
				goodRow = true;
			}
		}

		COUT <<  ENDL;

		// calculates the sum of values in the given row, which is the way to 
		// calculate the possible # of combos given n options
		int sum = 0;
		for(int j = 0; j < row+1; ++j)
		{
			if(j > 0)
			{
				COUT << "+ ";
			}
			sum += pascal[row][j];
			COUT << pascal[row][j] << " ";
		}
		COUT << "= " << sum << ENDL;
	
		COUT << "Total possible combinations given " << (row) << " options is " << sum << ENDL << ENDL;
		
		// checks if the user will continue calculating n choose k
		COUT << "Continue? [y/n]: ";
		CIN >> char_cont;
		while(char_cont != 'y' && char_cont != 'n')
		{
			COUT << "Not valid. Continue? [y/n]: ";
			CIN >> char_cont;
		}
		if(char_cont == 'n')
		{
			cont = false;
			COUT << ENDL << "Exiting program..." << ENDL << ENDL;
		}
		else
		{
			COUT << ENDL;
			goodRow = false;
		}
	}
	
}

