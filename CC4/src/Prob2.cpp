#include "../include/Prob2.h"

void test1();
void test2();
void test3();

int main() {
  test1();
  test2();
  test3();


  return 0;
}

void test1() {
   int arr [12] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
   int arrLen = 12;
   int ans = water(arr, arrLen);
   printArr(arr, arrLen);
   COUT << ans << ENDL;
}

void test2() {
   int arr [12] = { 9, 6, 4, 7, 10, 5, 0, 1, 1, 2, 0, 3 };
   int arrLen = 12;
   int ans = water(arr, arrLen);
   printArr(arr, arrLen);
   COUT << ans << ENDL;
}

void test3() {
   int arr [8] = { 2, 1, 1, 3, 0, 0, 4, 1 };
   int arrLen = 8;
   int ans = water(arr, arrLen);
   printArr(arr, arrLen);
   COUT << ans << ENDL;
}
