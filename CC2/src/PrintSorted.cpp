// Author: Livia Johan
// File: PrintSorted.cpp

#include "../include/Printer.h"

int main(){
	STRING name1[10] = {"Metcalfe", "Puckett", "Reed", "Talbot", "Woodcock", "Miller", "Cresswell", "Dejesus", "Christian", "Cordova"};
	
	print_words(name1, 10);
	switcheroo1(name1, 10);
	print_words(name1, 10);
	quickSort(name1, 0, 9, 10);
	print_words(name1, 10);
	switcheroo2ElectricBoogaloo(name1, 10);
	print_words(name1, 10);
}
