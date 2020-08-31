// Author: Livia Johan
// File: Printer.h

#include "Quick.h"

void print_words(STRING* array, int length)
{
	for(int i = 0; i < length; ++i)
	{
		COUT << array[i];
		COUT << ENDL;
	}
		COUT << ENDL;
}


void switcheroo1(STRING* array, int length)
{
	// assume that the names are in the RWQ alphabetization, convert into normal
	// ABCs so that they can be sorted with < & > accurately
	char ABC[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char RWQ[52] = {'R', 'W', 'Q', 'O', 'J', 'M', 'V', 'A', 'H', 'B', 'S', 'G', 'Z', 'X', 'N', 'T', 'C', 'I', 'E', 'K', 'U', 'P', 'D', 'Y', 'F', 'L', 'r', 'w', 'q', 'o', 'j', 'm', 'v', 'a', 'h', 'b', 's', 'g', 'z', 'x', 'n', 't', 'c', 'i', 'e', 'k', 'u', 'p', 'd', 'y', 'f', 'l'};

	// traverses array of words
	// array[word]
	for(int word = 0; word < length; ++word)
	{
		// traverses each letter of the word
		// array[word][letter]
		for(int letter = 0; letter < (int) array[word].length(); ++letter)
		{
			int count = 0;
			// matches to the ABC/RWQ array
			for(int i = 0; i < 52; ++i)
			{
				// matches to RWQ
				if(array[word][letter] == RWQ[i] && count == 0)
				{	
					// convert to ABC
					array[word][letter] = ABC[i];
					// makes sure switch only happens once
					count++;
				}
			}
		}
	}	

}
void switcheroo2ElectricBoogaloo(STRING* array, int length)
{
	// Switch back from ABC to RWQ so that the original names are shows
	char ABC[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char RWQ[52] = {'R', 'W', 'Q', 'O', 'J', 'M', 'V', 'A', 'H', 'B', 'S', 'G', 'Z', 'X', 'N', 'T', 'C', 'I', 'E', 'K', 'U', 'P', 'D', 'Y', 'F', 'L', 'r', 'w', 'q', 'o', 'j', 'm', 'v', 'a', 'h', 'b', 's', 'g', 'z', 'x', 'n', 't', 'c', 'i', 'e', 'k', 'u', 'p', 'd', 'y', 'f', 'l'};

	// traverses array of words
	// array[word]
	for(int word = 0; word < length; ++word)
	{
		// traverses each letter of the word
		// array[word][letter]
		for(int letter = 0; letter < (int) array[word].length(); ++letter)
		{
			int count = 0;
			// matches to the ABC/RWQ array
			for(int i = 0; i < 52; ++i)
			{
				// matches to ABC
				if(array[word][letter] == ABC[i] && count == 0)
				{	
					// switch back to RWQ
					array[word][letter] = RWQ[i];
					// makes sure switch only happens once
					count++;
				}
			}
		}
	}
}
