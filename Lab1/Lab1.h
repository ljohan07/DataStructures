#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

#define COUT std::cout
#define CIN std::cin
#define ENDL std::endl
#define SSTREAM std::stringstream
#define STRING std::string



bool noBadChars(STRING testString)
{
	for(unsigned int i = 0; i < testString.length(); ++i)
	{
		if(testString[i] < '0' || testString[i] > '9')
		{
			if(testString[i] == '-')
			{
				if(i != 0)
				{
					return false;
				}
				else if(testString[i] != '.')
				{
					return false;
				}
			}
		}
	}
	return true;
}

void getInfo(long unsigned int& integer, float& flo, double& dbl, char& word)
{
	
	STRING strInt;
	STRING strFlo;
	STRING strDbl;
	STRING strWord;
	
	COUT << "Input an unsigned integer: ";
	CIN >> strInt;
	if(SSTREAM(strInt) >> integer && noBadChars(strInt) && strInt.find(".") == STRING::npos)
	{
		COUT << "The unsigned integer value is " << integer << ENDL;	
	}
	else
	{
		std::cerr << strInt << " is not a valid unsigned Integer" << ENDL;
		exit(-1);
	}


	COUT << "Input a float: ";
	CIN >> strFlo;
	if(SSTREAM(strFlo) >> flo && noBadChars(strFlo))
	{
		COUT << "The float value is " << flo << ENDL;
	}
	else
	{
		std::cerr << strFlo << " is not a valid Float" << ENDL;
		exit(-1);
	}

	
	COUT << "Input a double: ";
	CIN >> strDbl;
	if(SSTREAM(strDbl) >> dbl && noBadChars(strDbl))
	{
		COUT << "The double value is " << dbl << ENDL;
	}
	else
	{
		std::cerr << strDbl << " is not a valid double" << ENDL;
		exit(-1);
	}

	COUT << "Input a char: ";
	CIN >> strWord;
	if(SSTREAM(strWord) >> word)
	{
		COUT << "The char is: " << word << ENDL;
	}
	else
	{
		std::cerr << strWord << " is not a valid char" << ENDL;
	}
																					
	
}

