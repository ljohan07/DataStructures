#include <cstdlib>
#include <iostream>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

class Patient {
private:
  STRING name;
  unsigned int arrival;
  unsigned int emergency;

public:

  // Overloaded Constructor
  Patient(STRING nameIn, unsigned int arrivalIn, unsigned int emergencyIn) : name(nameIn), arrival(arrivalIn), emergency(emergencyIn){};

  //Default Constructor
  Patient() : name(NULL), arrival(-1), emergency(-1){};


  // Assignment operator
  Patient& operator=(const Patient& assign) {

    if(this != &assign) {
      this->name = assign.name;
      this->arrival = assign.arrival;
      this->emergency = assign.emergency;
    }
    return *this;
  }

  // Copy Constructor
  Patient(const Patient& copy) : name(copy.name), arrival(-1), emergency(-1) {
    this->name = copy.name;
    this->arrival = copy.arrival;
    this->emergency = copy.emergency;
  }

  // Destructor
  ~Patient(){};



  // friend operator
  friend std::ostream& operator<<( std::ostream& output, const Patient& thePatient ) {
      output << "{" << thePatient.name << ", " << thePatient.arrival << ", " << thePatient.emergency << "}";
      return output;
  }

  // different operators

  float priority();

  bool operator>=( const Patient& rhs ) const{
    return (float)(5*(1/arrival)) + (float)(4*emergency) < (float)(5*(1/rhs.arrival)) + (float)(4*rhs.emergency);
  }

  bool operator>( const Patient& rhs ) const{
    return (float)(5*(1/arrival)) + (float)(4*emergency) <= (float)(5*(1/rhs.arrival)) + (float)(4*rhs.emergency);
  }

  bool operator<=( const Patient& rhs ) const{
    return (float)(5*(1/arrival)) + (float)(4*emergency) > (float)(5*(1/rhs.arrival)) + (float)(4*rhs.emergency);
  }

  bool operator<( const Patient& rhs ) const{
    return (float)(5*(1/arrival)) + (float)(4*emergency) >= (float)(5*(1/rhs.arrival)) + (float)(4*rhs.emergency);
  }

  bool operator==( const Patient& rhs ) const{
    return arrival == rhs.arrival && emergency == rhs.emergency;
  }


};
