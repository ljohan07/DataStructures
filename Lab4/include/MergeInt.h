// Author: Livia Johan
// File: MergeInt.h

#include <iostream>
#include <vector>
#include <algorithm>

#define COUT std::cout
#define ENDL std::endl
#define VECTOR std::vector

template< class T >
void printVector( const VECTOR<T>& printVec ){

   COUT << "{ ";

	for(long unsigned int iter = 0; iter < printVec.size(); iter++){
		COUT << printVec.at(iter) << " ";
	}

   COUT << "}" << ENDL ;

}


template< class T >
void printVecVec( const VECTOR< VECTOR<T> >& printVec ){

   COUT << "{";

	for(long unsigned int iter = 0; iter < printVec.size(); iter++){

		COUT << " { ";

		for(long unsigned int jter = 0; jter < printVec.at(iter).size(); jter++){

			COUT << printVec.at(iter).at(jter) << " ";

		}

		COUT << "} ";
	}

   COUT << "}" << ENDL ;

}

bool cmp(VECTOR<int> a, VECTOR<int> b){

	return a[0]<b[0];

}


int max( int& value1, int& value2 ){

	return (value1 > value2) ? value1 : value2;

}


int min( int& value1, int& value2 ){

	return (value1 < value2) ? value1 : value2;

}


VECTOR < VECTOR <int> > merge ( VECTOR < VECTOR <int> >& intervals) {
	VECTOR < VECTOR <int> > solution; // final intervals
	std::sort(intervals.begin(), intervals.end(), cmp); // sort the intervals
	solution.push_back(intervals[0]);
	long unsigned int index = 1;


  while(index < intervals.size())
	{
		long unsigned int last = solution.size() - 1;
		if( max(solution[last][0], solution[last][1]) < min(intervals[index][0], intervals[index][1]) )
		{
			solution.push_back(intervals[index]);
		}
		else
		{
			solution[last][0] = min(solution[last][0], intervals[index][0]);
			solution[last][1] = max(solution[last][1], intervals[index][1]);
		}
		index++;
	}
	return solution;

}
