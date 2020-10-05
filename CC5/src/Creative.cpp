
#include <cstdlib>
#include <iostream>

#include "../include/Patient.h"
#include "../include/PriorityQueue.h"

#define STRING std::string
#define COUT std::cout
#define CIN  std::cin



int main () {
  PriorityQueue <Patient> kyoo;

  bool continu = true;
  unsigned int arrival = 1;
  //takes in user input and pushes them to queue
  while(continu)
  {
    STRING name;
    unsigned int emergency;
    char cont;
    COUT << "Patient's Name: ";
    CIN >> name;
    COUT << "Pain Rating(1-10): ";
    CIN >> emergency;
    Patient p (name, arrival, emergency);
    kyoo.push(p);
    COUT << p << ENDL << ENDL;
    COUT << "continue? (y/n) ";
    CIN >> cont;
    if(cont == 'n')
      continu = false;
    ++arrival;
  }

  // pops all elements of queue
  while(!kyoo.empty()) {
    COUT << "Next Patient: " << kyoo.front() << ENDL;
    kyoo.pop();
  }





  return 0;
}
