// Author: Livia Johan
// File: PrintSorted.cpp

#include "../include/Printer.h"

int main(){
	// Example 1
	STRING name1[10] = {"Metcalfe", "Puckett", "Reed", "Talbot", "Woodcock", "Miller", "Cresswell", "Dejesus", "Christian", "Cordova"};

	COUT << "Original: " << ENDL;
	print_words(name1, 10);
	switcheroo1(name1, 10);

	COUT << "Converted: " << ENDL; 
	print_words(name1, 10);
	quickSort(name1, 0, 9, 10);
	COUT << "Sorted & Converted: " << ENDL;
	print_words(name1, 10);
	switcheroo2ElectricBoogaloo(name1, 10);
	COUT << "Sorted & Original: " << ENDL;
	print_words(name1, 10);

	
	// Example 2
	COUT << ENDL << ENDL << "EXAMPLE 2: " << ENDL;
	STRING reeds[16] = {"reed", "reeD", "reEd", "reED", "rEed", "rEeD", "rEEd", "rEED", "Reed", "ReeD", "ReEd", "ReED", "REed", "REeD", "REEd", "REED"};
	print_words(reeds, 16);
	switcheroo1(reeds, 16);
	quickSort(reeds, 0, 15, 16);
	switcheroo2ElectricBoogaloo(reeds, 16);
	print_words(reeds, 16);

	// Example 3
	COUT << ENDL << ENDL << "EXAMPLE 3: " << ENDL;
	STRING ex3[7] = {"-REED", "REED-", "REE-D", "RE-ED", "R-EED", "R-E-E-D", "----"};
	print_words(ex3, 7);
	switcheroo1(ex3, 7);
	quickSort(ex3, 0, 6, 7);
	switcheroo2ElectricBoogaloo(ex3, 7);
	print_words(ex3, 7);

	// Example 4
	COUT << ENDL << ENDL << "EXAMPLE 4: " << ENDL;
	STRING ex4[6] = {"McNuggets", "McDonald's", "McCall", "McCallister", "McCauley", "McFries"};
	print_words(ex4, 6);
	switcheroo1(ex4, 6);
	quickSort(ex4, 0, 5, 6);
	switcheroo2ElectricBoogaloo(ex4, 6);
	print_words(ex4, 6);
}
