// Author: Livia Johan
// File: Lab1c.cpp

#include <iostream>
#include <cstdlib>
#include "Lab1.h"

#define COUT std::cout
#define ENDL std::endl

class Node
{
	private:
		unsigned long int integer;
		float flo;
		double dbl;
		char word;

	public:
		Node(unsigned long int intIn, float floIn, double dblIn, char wordIn) : integer(intIn), flo(floIn), dbl(dblIn), word(wordIn){}


		friend std::ostream& operator<<(std::ostream& output, const Node& n)
		{
			output << "Initial address of 'this': " << &n << "\n" << "\n";
			output << "Unsigned Long Integer: " << n.integer << "\t at address " << &n.integer << "\n";
			output << "Float: " << n.flo << "\t at address " << &n.flo << "\n";
			output << "Double: " << n.dbl << "\t at address " << &n.dbl << "\n";
			output << "Character: " << n.word << "\t at address " << (void*) &n.word << "\n";
			return output;
		}
		
};

int main(void)
{
	unsigned long int integer;
	float flo;
	double dbl;
	char word;

	getInfo(integer, flo, dbl, word);

	Node node(integer, flo, dbl, word);

	COUT << "Node is at address " << node << ENDL;

	COUT << ENDL;

	return 0;
}
