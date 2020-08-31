// Author: Livia Johan
// File: Quick.h

#include <iostream>
#include <cstdlib>
#include <string>

#define CIN std::cin
#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

template <class T>
void print_array(T* array, int length)
{
	for(int i = 0; i < length; ++i)
	{
		COUT << array[i] << " ";
	}
	COUT << ENDL;
}

template <class T>
void swap(T* array, int one, int two)
{
	T temp = array[one];
	array[one] = array[two];
	array[two] = temp;
}

// this method was used for debugging
void print_values(int partition, int left, int right)
{
	COUT << "P: " << partition << " L: " << left << " R: " << right << ENDL;
}

template <class T>
void quickSort(T* array, int partition, int right,  int length)
{
	// set left value
	int left = partition + 1;
	// set the right partition for the 2nd recursive call 
	int temp_right = right;
	
	// checks the case where left is the same as right or they are adjacent
	if(left == right || left == right+1)
	{
		if(array[partition] > array[right])
		{
			swap(array, partition, right);	
		}
		else
		{
			return;
		}
	}

	while(left < right)
	{
		// check whether left should be incremented
		while(array[left] <= array[partition] && (left<right))
		{
			left++;
		}
		// check whether right should be decremented
		while(array[right] >= array[partition] && (left<=right))
		{
			right--;
		}
		// if the one on the right is smaller when done incrementing, swap left and right
		if(left < right && array[right] < array[left])
		{	
			swap(array, left, right);
		}
		// case where left and right cross over
		else
		{
			swap(array, partition, right);
		}
	}
	// recursive call
	quickSort(array, partition, right, length);
	quickSort(array, left, temp_right, length); 
	
}
