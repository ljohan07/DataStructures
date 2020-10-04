#include <cstdlib>
#include <iostream>

#define COUT std::cout
#define ENDL std::endl

template <class T>
class Priority {
private:
  T value;
  unsigned int priority;

public:

  // Overloaded Constructor
  Priority(T valueIn, unsigned int priorityIn) : value(valueIn), priority(priorityIn){};

  //Default Constructor
  Priority() : value(NULL), priority(-1){};


  // Assignment operator
  Priority<T>& operator=(const Priority<T>& assign) {

    if(this != &assign) {
      this->value = assign.value;
      this->priority = assign.priority;
    }
    return *this;
  }

  // Copy Constructor
  Priority(const Priority<T>& copy) : value(copy.value), priority(-1) {
    this->value = copy.value;
    this->priority = copy.priority;
  }

  // Destructor
  ~Priority(){};


  // friend operator
  friend std::ostream& operator<<( std::ostream& output, const Priority<T>& thePriority ) {
      output << "{" << thePriority.value << ", " << thePriority.priority << "}";
      return output;
  }

  // different operators
  bool operator>=( const Priority& rhs ) const{
		return priority < rhs.priority;
	}

	bool operator>( const Priority& rhs ) const{
		return priority <= rhs.priority;
	}

	bool operator<=( const Priority& rhs ) const{
		return priority > rhs.priority;
	}

	bool operator<( const Priority& rhs ) const{
		return priority >= rhs.priority;
	}

	bool operator==( const Priority& rhs ) const{
		return priority == rhs.priority;
	}


};
