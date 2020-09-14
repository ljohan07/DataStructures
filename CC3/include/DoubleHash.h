#include "LinearProbe.h"

template<class Key, class Value>
class DoubleHash : public HashTable<Key, Value> {

private:
  long unsigned int HashFunc2( const int& keyToTranslate ) const{
    long unsigned int newKey = keyToTranslate;
    if (keyToTranslate < 0){
      newKey = (long unsigned int)(-1 * keyToTranslate);
    }
    return (long unsigned int) (3 - (newKey % 3));
  }

  // Translate to unsigned int for std::string
  long unsigned int HashFunc2( const std::string& keyToTranslate ) const{

    long unsigned int newKey = (long unsigned int) keyToTranslate.size();
    return (long unsigned int) (3 - (newKey % 3));
  }


public:
    // Constructor
    DoubleHash(const unsigned int size = 0) : HashTable<Key, Value>(size){}


    long unsigned int findPos(const Key& theKey) const{
      long unsigned int currentPos;
      long unsigned int iter = 1;
      do{
        currentPos = (this->HashFunc( theKey ) + iter * HashFunc2( theKey )) % this->array.capacity();
				++iter;
      }
      while(
        this->array.at( currentPos ).state != EMPTY
				&& this->array.at( currentPos ).state != DELETED
				&& this->array.at( currentPos ).key != theKey
				&& iter < this->array.capacity()
      );
      if(this->array.at( currentPos ).state == ACTIVE
        && this->array.at( currentPos ).key != theKey ){

          return this->array.capacity();

        }

      return currentPos;



    }


    // Overloaded Friend Operator
		friend std::ostream& operator<<( std::ostream& output, const DoubleHash<Key, Value>& theTable ){

			output << "Double Hash Table Size: " << theTable.array.size() << std::endl;
			output << "Double Hashed Elements: " << theTable.numHash << std::endl;

			for(unsigned int iter = 0; iter < theTable.array.size(); iter++){

				output << "{" << iter << ": ";

				if( theTable.array[iter].state == ACTIVE ){

					output << "ACTIVE, ";

				}
				else if( theTable.array[iter].state == DELETED ){

					output << "DELETED, ";

				}
				else{

					output << "EMPTY, ";
				}

				output << theTable.array[iter].key << ", ";

				output << theTable.array[iter].value << "}" << std::endl;

			}

			return output;
		}
    ~DoubleHash(){};
};
