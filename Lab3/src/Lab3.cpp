// Author: Livia Johan
// File: Lab3.cpp

#include "../include/Anagram.h"

int main(){
	STRING s1 = "anagram";
	STRING s2 = "nagaram";
	COUT << "Example 1: " << ENDL << "Input: " << s1 << "\t" << s2 << ENDL;
	bool ex1 = anagram(s1, s2);
	print_bool(ex1);
	
	
	STRING s3 = "rat";
	STRING s4 = "car";
	COUT << "Example 2: " << ENDL << "Input: " << s3 << "\t" << s4 << ENDL;
	bool ex2 = anagram(s3, s4);
	print_bool(ex2);
	
	STRING s5 = "undefinability";
	STRING s6 = "unidentifiably";
	COUT << "Example 3: " << ENDL << "Input: " << s5 << "\t" << s6 << ENDL;
	bool ex3 = anagram(s5, s6);
	print_bool(ex3);

	STRING s7 = "coronavirus";
	STRING s8 = "dpspobwjsvt";
	COUT << "Example 4: " << ENDL << "Input: " << s7 << "\t" << s8 << ENDL;
	bool ex4 = anagram(s7, s8);
	print_bool(ex4);

	return 0;
}
