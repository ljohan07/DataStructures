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

void print_values(int partition, int left, int right)
{
	COUT << "P: " << partition << " L: " << left << " R: " << right << ENDL;
}

template <class T>
void quickSort(T* array, int partition, int right,  int length)
{
	int left = partition + 1;
	int temp_right = right;
	//COUT << ENDL << ENDL << "NEW!!!" << ENDL;
	//print_array(array, length);
	//print_values(partition, left, right);


		
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
		while(array[left] <= array[partition] && (left<right))
		{
			left++;
			//COUT << "increment left" << ENDL;
			//print_array(array, length);
			//print_values(partition, left, right);
		}
		while(array[right] >= array[partition] && (left<=right))
		{
			right--;
			//COUT << "decrement right" << ENDL;
			//print_array(array, length);
			//print_values(partition, left, right);
		}
		if(left < right && array[right] < array[left])
		//&& array[right]) < array[left])
		{	
			swap(array, left, right);
			//COUT << "swap left and right" << ENDL;
			//print_array(array, length);
			//print_values(partition, left, right);
		}
		else
		{
			swap(array, partition, right);
		}
		//if(left == right)
		//{
		//	right--;
			//COUT << "cross over" << ENDL;
			//print_array(array, length);
			//print_values(partition, left, right);
		//}
	}	
	if(right < left)
	{
		//COUT << "swap post-crossover" << ENDL;
		swap(array, partition, right);
		//print_array(array, length);
		//print_values(partition, left, right);
	}

	quickSort(array, partition, right, length);
	quickSort(array, left, temp_right, length); 
	
}
