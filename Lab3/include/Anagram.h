// Author: Livia Johan
// File: Anagram.h

#include <iostream>
#include <string>
#include <unordered_map>
#include "LinearProbe.h"

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string
#define UMAP std::unordered_map
#define VECTOR std::vector

bool anagram(STRING s1, STRING s2)
{
	// if different lengths, then they are not anagrams
	if(s1.length() != s2.length())
	{
		return false;
	}
	unsigned int len = (unsigned int) s1.length();

	// create Hash Table for the first word
	HashTable <char, int> theHash;
	for(unsigned int i = 0; i < len; ++i)
	{
		// add new letters
		if(theHash.contains(s1.at(i)))
		{
			theHash[s1.at(i)]++;
		}
		// repeating letters have a count value, key is char
		else
		{
			theHash.insert( {s1.at(i), 1} );
		}
	}
	// goes through second string
	// if hash contains it and value > 0, decrement value
	// else return false
	for(unsigned int i = 0; i < len; ++i)
	{
		if(theHash.contains(s2.at(i)) && theHash[s2.at(i)] > 0)
		{
			theHash[s2.at(i)]--;
		}
		else
		{
			return false;;
		}
	}
	return true;
}


// format the output statement
void print_bool(bool ans)
{
	COUT << "Output: ";
	if(ans)
	{
		COUT << "true";
	}
	else
	{
		COUT << "false";
	}
	COUT << ENDL << ENDL;
}
