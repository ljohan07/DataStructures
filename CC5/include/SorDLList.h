//author: Livia Johan

#include "DLList.h"

#define COUT std::cout
#define ENDL std::endl

template <class T>
class SorDLList: public DLList <T> {
public:

  // Default Constructor
  SorDLList() : DLList<T>() {}
  ~SorDLList(){};

  void Insert (T value)
  {
    typename DLList<T>::node* temp = new typename DLList<T>::node(value);

     if ( this->IsEmpty() )
     {
       this->head = temp;
       this->tail = temp;
     }
     else
     {
       typename DLList<T>::node* prev;
       typename DLList<T>::node* curr = this->head;

       // Case where inserting value < head value
       if(curr->data > value)
       {
         curr->prev = temp;
         curr->prev->next = curr;
         this->head = temp;
       }
       else
       {
         /* traverse the list until finding something greater than or end of File */
         while (curr != NULL && curr->data < value)
         {
           prev = curr;
           curr = curr->next;
         }


         /* insert the node, temp, after previous */
         prev -> next = temp;

         /* Allocate the previous node */
         prev -> next -> prev = prev;


         if(curr != NULL)
         {
           // allocate where temp is to have previous and next pointers
           curr->prev = temp;
           curr->prev->next = curr;
           prev = temp;
         }

         /* Allocate tail */
         if(curr == NULL)
         {
           this->tail = prev -> next;
         }
        }
       }


  }

  friend std::ostream& operator<<( std::ostream& output, const SorDLList<T>& theList ){

    typename DLList<T>::node* curr;


     if (theList.IsEmpty())
     {
      output << "The list is empty" << std::endl;;
     }
     else
     {
       //output << "list forreals: ";
       /* set the current pointer to the first
       ** node of the list */
       curr = theList.head;

      /* Until the end of the list */
      while (curr != NULL)
      {
        /* print the current data item */
        output << curr->data << " ";

        /* move to the next node */
        curr = curr -> next;
      }
     }

     return output;
  }

};
