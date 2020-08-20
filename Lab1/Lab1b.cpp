// Author: Livia Johan
// File: Lab1b.cpp

#include <iostream>
#include <cstdlib>
#include "Lab1.h"


struct Node
{	
	long unsigned int integer;
	float flo;
	double dbl;
	char word;

	Node(long unsigned int intIn, float floIn, double dblIn, char wordIn) : integer(intIn), flo(floIn), dbl(dblIn),  word(wordIn){}

	void printNodeValues()
	{
		COUT << "Initial address of 'this': " << this << ENDL << ENDL;
	
		COUT << "Unsigned long integer: " << this->integer << "\t at address " << &(this->integer) << ENDL;
		COUT << "Float: " << this->flo << "\t at address " << &(this->flo) << ENDL;
		COUT << "Double: " << this->dbl << "\t at address " << &(this->dbl) << ENDL;
		COUT << "Character: " << this->word << "\t at address " << (void*)&(this->word) << ENDL;
	}
};

int main(void)
{
	long unsigned int integer;
	float flo;
	double dbl;
	char word;

	getInfo(integer, flo, dbl, word);

	// create the node
	Node node(integer, flo, dbl, word);

	COUT << "Node is at address: " << &node << ENDL;
	node.printNodeValues();
	COUT << ENDL;

	return 0;

}
