// Author: Livia Johan
// File: Lab1a.cpp


#include <iostream>
#include <cstdlib>
#include "Lab1.h"

#define COUT std::cout
#define ENDL std::endl

void setNodeValues(void* reference, long unsigned int integer , float flo, double dbl, char word)
{
	// start with the long unsigned int
	*((long unsigned int *)(reference)) = integer;

	// calc the next location, input the float
	reference = (void *)((long unsigned int *)(reference) + 1);
	*((float *)(reference)) = flo;

	// calc the next location, input the double
	reference = (void *)((float *)(reference) + 1);
	*((double *)(reference)) = dbl;

	// calc the next location, input the character
	reference = (void *)((double *)(reference) + 1);
	*((char *)(reference)) = word;

}

void printNodeValues(void* reference)
{
	COUT << "Initial address of reference: " << reference << ENDL << ENDL;

	COUT << "Long Unsigned Int: " << *((long unsigned int *)(reference)) << "\t at address " << reference << ENDL;

	reference += sizeof(long unsigned int);
	COUT << "Float: " << *((float *)(reference)) << "\t at address " << reference << ENDL;

	reference += sizeof(float);
	COUT << "Double: " << *((double *)(reference)) << "\t at address " << reference << ENDL;

	reference += sizeof(double);
	COUT << "Char: " << *((char *)(reference)) << "\t at address " << reference << ENDL;

	COUT << ENDL;
	COUT << "Final address of reference: " << reference << ENDL;
}


int main(void)
{
	long unsigned int integer;
	float flo;
	double dbl;
	char word;


	getInfo(integer, flo, dbl, word);

	long unsigned int nodeSize = sizeof(long unsigned int) + sizeof(float) + sizeof(double) + sizeof(char);

	void* node = malloc(nodeSize);
	
	// set the node values
	setNodeValues(node, integer, flo, dbl, word);

	// print the values
	printNodeValues(node);

	// free void* with allocated mem
	free(node);
	
	return 0;

}
