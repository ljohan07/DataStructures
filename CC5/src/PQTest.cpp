// Author: Livia Johan
// File: PQTest
#include <cstdlib>
#include <iostream>

#include "../include/Priority.h"
#include "../include/PriorityQueue.h"


#define STRING std::string

void testOne();
void testTwo();


int main () {
  testOne();
  COUT << ENDL;
  testTwo();

  return 0;
}

void testOne() {
  PriorityQueue <Priority<STRING>> kyoo;

  Priority<STRING> p1 ("Cheering", 5);
  Priority<STRING> p2 ("The", 3);
  Priority<STRING> p3 ("Name", 7);
  Priority<STRING> p4 ("Wake", 1);
  Priority<STRING> p5 ("Echoes", 4);
  Priority<STRING> p6 ("Her", 6);
  Priority<STRING> p7 ("Up", 2);


  kyoo.push(p1);
  COUT << "pushing: " << p1 << ENDL;
  kyoo.push(p2);
  COUT << "pushing: " << p2 << ENDL;
  kyoo.push(p3);
  COUT << "pushing: " << p3 << ENDL;
  kyoo.push(p4);
  COUT << "pushing: " << p4 << ENDL;
  kyoo.push(p5);
  COUT << "pushing: " << p5 << ENDL;
  kyoo.push(p6);
  COUT << "pushing: " << p6 << ENDL;
  kyoo.push(p7);
  COUT << "pushing: " << p7 << ENDL;

  COUT << ENDL;
  while(!kyoo.empty()) {
    COUT << "popping front: " << kyoo.front() << ENDL;
    kyoo.pop();
  }

}

void testTwo() {
  PriorityQueue <Priority<STRING>> kyoo;


  Priority<STRING> p1 ("A", 5);
  Priority<STRING> p2 ("View", 10);
  Priority<STRING> p3 ("Point", 8);
  Priority<STRING> p4 ("A", 1);
  Priority<STRING> p5 ("World", 4);
  Priority<STRING> p6 ("New", 6);
  Priority<STRING> p7 ("Whole", 2);
  Priority<STRING> p8 ("New", 3);
  Priority<STRING> p9 ("Fantastic", 7);
  Priority<STRING> p10 ("Of", 9);


  kyoo.push(p1);
  COUT << "pushing: " << p1 << ENDL;
  kyoo.push(p2);
  COUT << "pushing: " << p2 << ENDL;
  kyoo.push(p3);
  COUT << "pushing: " << p3 << ENDL;
  kyoo.push(p4);
  COUT << "pushing: " << p4 << ENDL;
  kyoo.push(p5);
  COUT << "pushing: " << p5 << ENDL;
  kyoo.push(p6);
  COUT << "pushing: " << p6 << ENDL;
  kyoo.push(p7);
  COUT << "pushing: " << p7 << ENDL;
  kyoo.push(p8);
  COUT << "pushing: " << p8 << ENDL;
  kyoo.push(p9);
  COUT << "pushing: " << p9 << ENDL;
  kyoo.push(p10);
  COUT << "pushing: " << p10 << ENDL;


  COUT << ENDL;
  while(!kyoo.empty()) {
    COUT << "popping front: " << kyoo.front() << ENDL;
    kyoo.pop();
  }

}
