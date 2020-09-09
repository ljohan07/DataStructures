// Author: Livia Johan
// File: Lab4.cpp

#include "../include/MergeInt.h"

void ex1(){

	COUT << "-------------------------" << ENDL;
	COUT << "Example 1: " << ENDL;

	VECTOR< VECTOR<int> > v = { {1,3}, {2,6}, {8,10}, {15,18}};

	COUT << "Inputs: " << ENDL;
	COUT << "Intervals: ";
	printVecVec( v );

	COUT << ENDL << "Output: " << ENDL;
	printVecVec( merge(v) );

}
void ex2(){

	COUT << "-------------------------" << ENDL;
	COUT << "Example 3: " << ENDL;

	VECTOR< VECTOR<int> > v = { {1,4}, {4,5} };

	COUT << "Inputs: " << ENDL;
	COUT << "Intervals: ";
	printVecVec( v );

	COUT << ENDL << "Output: " << ENDL;
	printVecVec( merge(v) );

}
void ex3(){

	COUT << "-------------------------" << ENDL;
	COUT << "Example 3: " << ENDL;

	VECTOR< VECTOR<int> > v = { {44,46}, {31,35}, {2,9}, {5,7}, {10, 12}, {11, 22}};

	COUT << "Inputs: " << ENDL;
	COUT << "Intervals: ";
	printVecVec( v );

	COUT << ENDL << "Output: " << ENDL;
	printVecVec( merge(v) );

}
void ex4(){

	COUT << "-------------------------" << ENDL;
	COUT << "Example 4: " << ENDL;

	VECTOR< VECTOR<int> > v = { {1,2}, {3,4}, {2,5}, {10,15}, {6, 12}, {16, 22}, {18, 32}, {25, 46}};

	COUT << "Inputs: " << ENDL;
	COUT << "Intervals: ";
	printVecVec( v );

	COUT << ENDL << "Output: " << ENDL;
	printVecVec( merge(v) );

}
int main(){
	ex1();
	ex2();
	ex3();
	ex4();
	return 0;
}
