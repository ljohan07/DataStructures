#include "Creative.h"

int* getChoose(int numRows)
{
	int* nck = new int[2];

	bool goodN = false;
	bool goodK = false;
	int n;
	int k;

	COUT << "To calculate nCk (n choose k):" << ENDL;


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

void getCombos(int** pascal, int* nck)
{
	COUT << "Calculating " << nck[0] << " choose " << nck[1] << "..." << ENDL;
	int chosen = pascal[nck[0]][nck[1]];
	COUT << nck[0] << " choose " << nck[1] << " is " << chosen << ENDL;
}

void totalCombos(int** pascal, int* nck)
{
	int rowNum = nck[0]+1;
	COUT <<  ENDL;
	int sum = 0;
	for(int j = 0; j < rowNum; ++j)
	{
		if(j > 0)
		{
			COUT << "+ ";
		}
		sum += pascal[rowNum-1][j];
		COUT << pascal[rowNum-1][j] << " ";
	}
	COUT << "= " << sum << ENDL;

	COUT << "Total possible combinations given " << nck[0] << " options is " << sum << ENDL;
	
}

