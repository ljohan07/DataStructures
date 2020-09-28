// Author: Livia Johan
// File: Prob1.cpp

#include "../include/Prob1.h"

void test1();
void test2();
void test3();

int main(){

	test1();
	test2();
	test3();

	return 0;

}

void test1() {
	int m1=5;
	int n1=5;
	// Brace Initializer Lists
	VEC<VEC<int>> matrix {
		{ 1, 3, 4, 3, 7 },
    { 2, 2, 3, 4, 4 },
    { 2, 4, 5, 3, 1 },
    { 6, 7, 5, 4, 5 },
    { 5, 1, 6, 2, 4 },
	};
	print_matrix(matrix);
	VEC<VEC<int>> a = answer(m1, n1, matrix);
	VEC<VEC<int>> ans = remove_dupes(a);
	print_ans(ans);
}

void test2() {
	int m2=5;
	int n2=7;
	// Brace Initializer Lists
	VEC<VEC<int>> matrix {
		{ 1, 13, 2, 2, 12, 11, 13 },
		{ 9, 14, 2, 7, 7, 9, 3 },
		{ 4, 9, 5, 15, 15, 11, 11 },
		{ 6, 13, 11, 3, 9, 7, 12 },
		{ 5, 14, 12, 4, 4, 11, 11 },
	};
	print_matrix(matrix);
	VEC<VEC<int>> a = answer(m2, n2, matrix);
	VEC<VEC<int>> ans = remove_dupes(a);
	print_ans(ans);
}

void test3() {
	int m2=8;
	int n2=8;
	// Brace Initializer Lists
	VEC<VEC<int>> matrix {
		{ 5, 3, 1, 4, 4, 6, 10, 4 },
		{ 2, 8, 6, 8, 4, 4, 10, 10 },
		{ 10, 6, 2, 8, 9, 1, 9, 4 },
		{ 8, 4, 9, 9, 3, 1, 4, 5 },
		{ 6, 10, 4, 2, 8, 1, 2, 1 },
		{ 5, 5, 2, 5, 9, 2, 1, 9 },
		{ 5, 7, 2, 4, 1, 3, 8, 10 },
		{ 1, 6, 2, 1, 6, 6, 4, 4 },
	};
	print_matrix(matrix);
	VEC<VEC<int>> a = answer(m2, n2, matrix);
	VEC<VEC<int>> ans = remove_dupes(a);
	print_ans(ans);
}
