#include "../include/Quick.h"


int main()
{
	char array1[19] = {'T', 'H', 'E', 'C', 'O', 'R', 'O', 'N', 'A', 'V', 'I', 'R','U', 'S', 'S', 'U', 'C', 'K', 'S'};
	COUT << "Initial is: ";
	print_array(array1, 19);	
	quickSort(array1, 0, 18, 19);
	COUT << "Final is  : ";
	print_array(array1, 19);	
	COUT << ENDL;

	int array2[8] = {22, 13, 33, 44, -10, 55, 88, 27};
	COUT << "Initial is: ";
	print_array(array2, 8);
	quickSort(array2, 0, 7, 8);
	COUT << "Final is  : ";
	print_array(array2, 8);
	COUT << ENDL;

	unsigned int array3[9] = {14, 99, 42, 77, 2, 66, 1, 8, 44};
	COUT << "Initial is: ";
	print_array(array3, 8);
	quickSort(array3, 0, 8, 9);
	COUT << "Final is  : ";
	print_array(array3, 9);
	COUT << ENDL;

	char array4[10] = {'N', 'o', 't', 'r', 'e', ' ', 'D', 'a', 'm', 'e'};
	COUT << "Initial is: ";
	print_array(array4, 10);	
	quickSort(array4, 0, 9, 10);
	COUT << "Final is  : ";
	print_array(array4, 10);	
	COUT << ENDL;

	STRING array5[5] = {"Data", "Structures", "Creativity", "Challenge", "2"};
	COUT << "Initial is: ";
	print_array(array5, 5);	
	quickSort(array5, 0, 4, 5);
	COUT << "Final is  : ";
	print_array(array5, 5);	
	COUT << ENDL;

}
