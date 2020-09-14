#include "Creative.h"



int main(){
  // initialize double hashed table
  DoubleHash<STRING, STRING> user_pass;
  user_pass.insert( { "adam", "evegotmeintrouble" } );
  user_pass.insert( { "eve", "snakegobrrr" } );
  user_pass.insert( { "noah", "bigboatgobrrr" } );
  user_pass.insert( { "moses", "burningbushgobrrr" } );
  user_pass.insert( { "enigma", "alanTuring123" } );
  user_pass.insert( { "pineapple", "yellowandspiky" } );
  // list of words that aren't allowed in passwords
  STRING newUser = "";
  COUT << "Create new user? (y/n) ";
  CIN >> newUser;
  if(newUser == "y")
  {
    create_user(user_pass);
  }
// if correct username and password, display the hashtable
  STRING loggingIn = "";
  COUT << "Log In? (y/n) ";
  CIN >> loggingIn;
  bool access = false;
  if(loggingIn =="y")
  {
    access = login(user_pass);
  }


  if (access)
  {
    STRING username = "";
    COUT << "Whose password are you looking for? ";
    CIN >> username;
    search_pass(username, user_pass);
  }
}
