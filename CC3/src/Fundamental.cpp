// Author: Livia Johan
// File: Fundamental.cpp

#include "../include/LinearProbe.h"
#include "../include/DoubleHash.h"

#define COUT std::cout
#define ENDL std::endl


int main(){

	HashTable<unsigned int, std::string> hashOne;


	// Insert into the String Hash
	hashOne.insert( { 76, "First"} );
	hashOne.insert( { 40, "Second"} );
	hashOne.insert( { 48, "Third"} );

  COUT << hashOne << ENDL;

  DoubleHash<unsigned int, std::string> doubleOne;

  doubleOne.insert( { 76, "First"} );
	doubleOne.insert( { 40, "Second"} );
	doubleOne.insert( { 48, "Third"} );

  COUT << doubleOne << ENDL;

  hashOne.insert( { 5, "Fourth"} );
  hashOne.insert( { 55, "Fifth"} );

  doubleOne.insert( { 5, "Fourth"} );
  doubleOne.insert( { 55, "Fifth"} );

  COUT << hashOne << ENDL;
  COUT << doubleOne << ENDL;

  hashOne.insert( { 10, "Sixth"} );
  hashOne.insert( { 18, "Seventh"} );

  doubleOne.insert( { 10, "Sixth"} );
  doubleOne.insert( { 18, "Seventh"} );

  COUT << hashOne << ENDL;
  COUT << doubleOne << ENDL;

  hashOne.insert( { 44, "Eighth"} );
  hashOne.insert( { 64, "Ninth"} );

  doubleOne.insert( { 44, "Eighth"} );
  doubleOne.insert( { 64, "Ninth"} );

  COUT << hashOne << ENDL;
  COUT << doubleOne << ENDL;

}
