// Author: Livia Johan
// File: Prob1.h

#include <iostream>
#include <cstdlib>
#include <vector>
#include "queue.h"

#define COUT std::cout
#define ENDL std::endl
#define VEC std::vector

// queue SearchNode used in BFS
struct SearchNode
{

	int x;	// x value of the coordinate
	int y;	// y value of the coordinate
	int dist;	// Distance traveled from source

	SearchNode(  ) : x(), y(), dist() {}

	SearchNode( int xIn, int yIn, int distIn ) : x(xIn), y(yIn), dist(distIn) {}

};

/********************************************
* Function Name  : isValid
* Pre-conditions : int matrix[][N], bool visited[][N], int rowVal, int colVal
* Post-conditions: bool
*
* Determines if the matrix move is valid.
* Checks if (rowVal,colVal) is a valid position
********************************************/
//int M;
//int N;
bool isValid(VEC<VEC<int>> matrix, VEC<VEC<bool>> visited, int ogRow, int ogCol, int rowVal, int colVal)
{
	return (rowVal >= 0) 		// rowVal greater than or equal to 0, so inside the maze
			&& (rowVal < int(matrix.size())) 	// rowVal is less than M, so inside the maze
			&& (colVal >= 0) 	// colVal greater than or equal to 0, so inside the maze
			&& (colVal < int(matrix[0].size()))		// colVal is less than M, so inside the maze
      && (matrix[rowVal][colVal] <= matrix[ogRow][ogCol]) // if matrix[rowVal][colVal] <= value at origin, then valid move
			&& !visited[rowVal][colVal];	// if visited[rowVal][colVal] is false, then not yet visited
}

bool BFS(VEC<VEC<int>> matrix, int orig_x, int orig_y, int dest_x, int dest_y)
{

  unsigned int mult = (unsigned int) matrix.size() * (unsigned int) matrix[0].size();
	// Brace Initializer Lists for Visited
  //COUT << matrix.size() << ":" << matrix[0].size() << ENDL;
	VEC<VEC<bool>> visited {};
  VEC<bool> inside{};
  for(unsigned int i = 0; i < matrix[0].size(); ++i){
    inside.push_back(0);
  }
  for(unsigned int j = 0; j < matrix.size(); ++j) {
    visited.push_back(inside);
  }

	queue< SearchNode > theQueue;

	// Mark the origin as visited
	visited[orig_x][orig_y] = true;

	// Push the origin onto the queue
	theQueue.push({orig_x, orig_y, 0});

	// stores length of longest path from source to destination
	unsigned int min_dist = mult + 1;	// Every single possible SearchNode in the array visited once

	// Case 3 - The queue is empty, we run out of cases
	while (!theQueue.empty())
	{
		// Get the front SearchNode and evaluate the BFS
		SearchNode frontSearchNode = theQueue.front();
		theQueue.pop();

		// Set iterarors to the x and y coordinate, and get the current distance
		int iter = frontSearchNode.x, jter = frontSearchNode.y, dist = frontSearchNode.dist;

		// Case 1 - If we found the values, we found the destination
		if (iter == dest_x && jter == dest_y)
		{
			min_dist = dist;
			break;
		}

		// Next, we check for all elements
		// First, check down
		if( isValid( matrix, visited, iter, jter, iter + 1, jter ) ){

			visited[ iter + 1 ][ jter ] = true;

			theQueue.push( SearchNode( iter + 1, jter, frontSearchNode.dist + 1 ) );
		}

		// Next, check right
		if( isValid( matrix, visited, iter, jter, iter, jter + 1 ) ){

			visited[ iter ][ jter + 1 ] = true;

			theQueue.push( SearchNode( iter, jter + 1, frontSearchNode.dist + 1 ) );
		}

		// Next, check up
		if( isValid( matrix, visited, iter, jter, iter - 1, jter ) ){

			visited[ iter - 1 ][ jter ] = true;

			theQueue.push( SearchNode( iter - 1, jter, frontSearchNode.dist + 1 ) );
		}

		// Finally, check left
		if( isValid( matrix, visited, iter, jter, iter, jter - 1 ) ){

			visited[ iter ][ jter + 1 ] = true;

			theQueue.push( SearchNode( iter, jter - 1, frontSearchNode.dist + 1 ) );
		}

	}

	// If min_dist is less than N*M, then the length has been found
	if (min_dist != mult + 1)
			return true;

	else
		return false;

}

VEC<VEC<int>> answer(int m, int n, VEC<VEC<int>> matrix)
{
  VEC<VEC<int>> temp;
	// bottom row vs top row
	for(int atlCol = 0; atlCol < n; ++atlCol) {
			for(int pacCol = 0; pacCol < n; ++pacCol) {
				if(BFS(matrix, m-1, atlCol, 0, pacCol)) {
					VEC<int> location {m-1, atlCol};
					temp.push_back(location);
				}
			}
	}
	// bottom row vs left column
	for(int atlCol = 0; atlCol < n; ++atlCol) {
			for(int pacRow = 0; pacRow < m; ++pacRow) {
				if(BFS(matrix, m-1, atlCol, pacRow, 0)) {
					VEC<int> location {m-1, atlCol};
					temp.push_back(location);
				}
			}
	}
	// right col vs top row
	for(int atlRow = 0; atlRow < m; ++atlRow) {
			for(int pacCol = 0; pacCol < n; ++pacCol) {
				if(BFS(matrix, atlRow, n-1, 0, pacCol)) {
					VEC<int> location {atlRow, n-1};
					temp.push_back(location);
				}
			}
	}
	// right col vs left col
	for(int atlRow = 0; atlRow < m; ++atlRow) {
		for(int pacRow = 0; pacRow < m; ++pacRow) {
			if(BFS(matrix, atlRow, n-1, pacRow, 0)) {
				VEC<int> location {atlRow, n-1};
				temp.push_back(location);
			}
		}
	}
  return temp;
}




void print_ans(VEC<VEC<int>> ans) {
  COUT << "[";
  for(unsigned int i = 0; i < ans.size(); ++i) {
  	if(i != 0) {
  		COUT << ", ";
  	}
  	COUT << "[";
  	for(unsigned int j = 0; j < ans[0].size(); ++j) {
  		if(j != 0) {
  			COUT << ", ";
  		}
  		COUT << ans[i][j];
  	}
  	COUT << "]";
  }
  COUT << "]";
  COUT << ENDL << ENDL;

}


VEC<VEC<int>> remove_dupes(VEC<VEC<int>> temp)
{
  VEC<VEC<int>> ans;
	// iterate thru the vector with duplicates
	for(int i = 0; i < (int) temp.size(); ++i) {
		VEC<int> location = temp[i];
		bool insert = true;
		// iterate through i+1 to end of array, if it repeats, don't add
		// this way, only adds the last repetition of the element
		for(int j = i+1; j < (int) temp.size(); ++j) {
			if(location == temp[j]) {
				insert = false;
			}
		}
		if(insert){
			ans.push_back(location);
		}


	}
  return ans;
}

void print_matrix(VEC<VEC<int>> matrix) {
  for(unsigned int i = 0; i < matrix.size(); ++i) {
  	COUT << "[";
  	for(unsigned int j = 0; j < matrix[0].size(); ++j) {
  		if(j != 0) {
  			COUT << ", ";
  		}
  		COUT << matrix[i][j];
  	}
  	COUT << "]";
		COUT << ENDL;
  }
  COUT << ENDL;

}
