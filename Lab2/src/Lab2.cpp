// Author: Livia Johan
// File: Lab2.cpp

#include "../include/functions.h"


template <class T>

int getSubSeq(T* arr, int length)
{
	VEC<int> subLength;
	//int arrLength = ((int)sizeof(arr))/((int)sizeof(arr[0]));
	//int arrLength = *(&arr + 1) - arr;
	int ans = 0;
	COUT << ENDL <<  ENDL << ENDL;

	for(int i = 0; i < length; ++i)
	{
		subLength.push_back(1);
		//COUT << subLength[i] << ENDL;
		//COUT << "array @ i = " << i << ": " << arr[i];
		
		//COUT << "i = " << i << ": " << arr[i] << " ";
		//COUT << ENDL << ENDL;

		for(int j = 0; j < i; ++j)
		{	
			
			if(arr[j] <= arr[i] && (subLength.at(j)+1) > (subLength.at(i)))
			{
				subLength.at(i) = subLength.at(j) + 1;
				if(subLength[i] > ans)
				{
					ans = subLength[i];
				}
			}
		}
	}
	return ans;
}



int main(){
	
	int ex1 [] = {10, 9, 2, 5, 3, 7, 101, 18};
	int ans1 = getSubSeq(ex1, 8);
	
	COUT << "ans1: " << ans1 << ENDL;

	unsigned int ex2[] = {10, 5, 8, 3, 9, 4, 12, 11};
	int ans2 = getSubSeq(ex2, 8);
	COUT << "ans2: " << ans2 << ENDL;

	unsigned int ex2a[] = {10, 5, 8, 3, 9, 4, 12, 11, 12};
	int ans2a = getSubSeq(ex2a, 9);
	COUT << "ans2a: " << ans2a << ENDL;

	char ex3[] = {'e', 'A', 'B', 'a', 'C', 'f', 'D', 'E'};
	int ans3 = getSubSeq(ex3, 8);
	COUT << "ans3: " << ans3 << ENDL;

	return 0;
}
