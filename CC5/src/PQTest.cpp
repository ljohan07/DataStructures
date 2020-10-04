#include <cstdlib>
#include <iostream>

#include "../include/Priority.h"
#include "../include/PriorityQueue.h"


#define STRING std::string


int main () {
  PriorityQueue <Priority<STRING>> kyoo;

  Priority<STRING> p1 ("Cheering", 5);
  Priority<STRING> p2 ("The", 3);
  Priority<STRING> p3 ("Name", 7);
  Priority<STRING> p4 ("Wake", 1);
  Priority<STRING> p5 ("Her", 6);
  Priority<STRING> p6 ("Up", 2);

  //COUT << (p1 > p3) << ENDL;

/*
  COUT << p1 << ENDL;
  COUT << p2 << ENDL;
  COUT << p3 << ENDL;
  COUT << p4 << ENDL;
  COUT << p5 << ENDL;
  COUT << p6 << ENDL;
*/


  std::cout << kyoo.size() << std::endl;
  kyoo.push(p1);
  std::cout << "The front element is now " << kyoo.front() << std::endl;
	std::cout << "The back element is now " << kyoo.back() << std::endl;
  kyoo.push(p2);
  std::cout << "The front element is now " << kyoo.front() << std::endl;
	std::cout << "The back element is now " << kyoo.back() << std::endl;
  kyoo.push(p3);
  std::cout << "The front element is now " << kyoo.front() << std::endl;
  std::cout << "The back element is now " << kyoo.back() << std::endl;
  kyoo.push(p4);
  std::cout << "The front element is now " << kyoo.front() << std::endl;
  std::cout << "The back element is now " << kyoo.back() << std::endl;
  kyoo.push(p5);
  std::cout << "The front element is now " << kyoo.front() << std::endl;
  std::cout << "The back element is now " << kyoo.back() << std::endl;
  kyoo.push(p6);
  std::cout << "The front element is now " << kyoo.front() << std::endl;
  std::cout << "The back element is now " << kyoo.back() << std::endl;

  COUT << "popping front: " << kyoo.front() << ENDL;
  kyoo.pop();
  COUT << "popping front: " << kyoo.front() << ENDL;
  kyoo.pop();
  COUT << "popping front: " << kyoo.front() << ENDL;
  kyoo.pop();
  COUT << "popping front: " << kyoo.front() << ENDL;
  kyoo.pop();
  COUT << "popping front: " << kyoo.front() << ENDL;
  kyoo.pop();
  COUT << "popping front: " << kyoo.front() << ENDL;




  return 0;
}
