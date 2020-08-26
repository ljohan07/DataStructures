// Author: Livia Johan
// File: Lab2.cpp

#include "../include/functions.h"


template <class T>

int getSubSeq(T* arr, int length)
{
	// vector to hold subarray lengths at same indices of the given array
	VEC<int> subLength;
	int ans = 1;
	
	// iterate through the array
	for(int i = 0; i < length; ++i)
	{
		// set subarray length default = 1
		subLength.push_back(1);
		// iterate from 0 to i-1
		for(int j = 0; j < i; ++j)
		{	
			// check if the previous one is smaller
			// check if adding current element into subarray would make a bigger subarray than before
			if(arr[j] <= arr[i] && (subLength.at(j)+1) > (subLength.at(i)))
			{
				// add 1 to the number of elements in a subarray that ends at index i
				subLength.at(i) = subLength.at(j) + 1;
				// set the answer to the bigger value
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
	
	// example 1
	COUT << ENDL << "Example 1: integers" << ENDL;
	COUT << "[10, 9, 2, 5, 3, 7, 101, 18]" << ENDL;
	int ex1 [] = {10, 9, 2, 5, 3, 7, 101, 18};
	int ans1 = getSubSeq(ex1, 8);
	COUT << "Example 1 output: " << ans1 << ENDL << ENDL;
	
	// example 2
	COUT << "Example 2: unsigned integers" << ENDL;
	COUT << "[10, 5, 8, 3, 9, 4, 12, 11]" << ENDL;
	unsigned int ex2[] = {10, 5, 8, 3, 9, 4, 12, 11};
	int ans2 = getSubSeq(ex2, 8);
	COUT << "Example 2 output: " << ans2 << ENDL << ENDL;

	// example 2a
	COUT << "Example 2a: unsigned integers" << ENDL;
	COUT << "[10, 5, 8, 3, 9, 4, 12, 11, 12]" << ENDL;
	unsigned int ex2a[] = {10, 5, 8, 3, 9, 4, 12, 11, 12};
	int ans2a = getSubSeq(ex2a, 9);
	COUT << "Example 2a output: " << ans2a << ENDL << ENDL;

	// example 3
	COUT << "Example 3: ASCII characters" << ENDL;
	COUT << "['e', 'A', 'B', 'a', 'C', 'f', 'D', 'E']" << ENDL;
	char ex3[] = {'e', 'A', 'B', 'a', 'C', 'f', 'D', 'E'};
	int ans3 = getSubSeq(ex3, 8);
	COUT << "Example 3 output: " << ans3 << ENDL << ENDL;

	// example 4
	COUT << "Example 4: unsigned int" << ENDL;
	COUT << "[22, 17, 4, 7, 9, 11, 1, 5, 200]" << ENDL;
	unsigned int ex4[] = {22, 17, 4, 7, 9, 11, 1, 5, 200};
	int ans4 = getSubSeq(ex4, 9);
	COUT << "Example 4 output: " << ans4 << ENDL << ENDL;

	// example 5
	COUT << "Example 5: std::string" << ENDL;
	COUT << "\"Hello, world. Goodbye, world.\"" << ENDL;
	STRING exStr[]= {"Hello, ", "world. ", "Goodbye, ", "world."};
	int ansStr = getSubSeq(exStr, 4);
	COUT << "Example 5 output: " << ansStr << ENDL;


	return 0;
}
