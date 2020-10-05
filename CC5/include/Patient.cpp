#include "Patient.h"

Patient::Patient() : name(NULL), arrival(-1), emergency(-1){}
Patient::Patient(STRING nameIn, unsigned int arrivalIn, unsigned int emergencyIn) : name(nameIn), arrival(arrivalIn), emergency(emergencyIn){}

Patient::Patient(const Patient& copy) : name(copy.name), arrival(-1), emergency(-1) {
  this->name = copy.name;
  this->arrival = copy.arrival;
  this->emergency = copy.emergency;
}

std::ostream& operator<<( std::ostream& output, const Patient& thePatient ) {
    output << "{" << thePatient.name << ", " << thePatient.arrival << ", " << thePatient.emergency << "}";
    return output;
}
