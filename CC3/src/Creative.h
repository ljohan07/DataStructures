// Author: Livia Johan
// File: Creative.h
#include "../include/DoubleHash.h"
#include <string>
#include <iostream>

#define STRING std::string
#define COUT std::cout
#define CIN std::cin
#define ENDL std::endl


// creates vector of prohibited words in password
std::vector<STRING> prohibitedWords(){
    bool cont = true;
    std::vector< STRING > words;
    // as long as the user doesn't want to quit, program will ask for more
    // prohibited words
    while(cont)
    {
      STRING word = "";
      COUT << "Prohibited Words (q to quit): ";
      CIN >> word;
      if(word == "q")
      {
        cont = false;
      }
      else
      {
        words.push_back(word);
      }
    }
    return words;
}

void printProhibit(std::vector<STRING> words){
    for(unsigned int i = 0; i < words.size(); ++i)
    {
      COUT << words[i] << ENDL;
    }
}

// checks if password meets requirements
bool checkPW(STRING password, std::vector<STRING> words) {
  // length must be 8 or more
  if(password.length() < 8)
  {
    COUT << "Password does not meet specifications" << ENDL;
    return false;
  }
  // iterate through the prohibited words
  for(unsigned int i = 0; i < words.size(); ++i)
  {
      // maximum beginning index for a substring to look for prohibited word
      long unsigned int maxIndex = password.length() - words[i].length();
      if(words[i] == password)
      {
          COUT << "not a valid password" << ENDL;
          return false;
      }
      // checks substrings to see if they are the prohibited word
      for(unsigned int j = 0; j <= maxIndex; ++j)
      {
        STRING temp = password.substr(j, words[i].length());
        if(temp == words[i])
        {
          COUT << "not a valid password" << ENDL;
          return false;
        }
      }
  }
  return true;
}

// creates a new user for the hash table
DoubleHash<STRING, STRING> create_user(DoubleHash<STRING, STRING> user_pass){
  // creates that list of prohibited words
  std::vector< STRING > words = prohibitedWords();
  printProhibit(words);

  // asks user for new user/pw
  STRING username = "";
  COUT << "what is your username? \t";
  CIN >> username;

  STRING password = "";
  COUT << "what is your password? \t";
  CIN >> password;

  // check if password is usable
  bool checking = checkPW(password, words);
  if(checking)
  {
    // doublehash holds username and password
    user_pass.insert( { username, password } );
    COUT << user_pass << ENDL;
    COUT << "user has been added" << ENDL;

  }
  else
  {
    COUT << "user could not be added" << ENDL;
  }
  return user_pass;
}

// see if user input matches any login info from hash table
bool login(DoubleHash<STRING, STRING> user_pass){
  STRING user = "";
  STRING pass = "";

  // user input for username
  COUT << "user: ";
  CIN >> user;

  if(user_pass.contains(user))
  {
    COUT << "user found!" << ENDL;

    COUT << "PASS: ";
    CIN >> pass;
    //if both username and password work
    if(pass == user_pass[user])
    {
      COUT << "Welcome " << user << "!" << ENDL;
      return true;
    }
    else
    {
      COUT << "incorrect password" << ENDL;
    }
  }
  else
  {
    COUT << "user does not exist" << ENDL;
  }
  return false;
}

// searches for username/password pair given just the username
void search_pass(STRING username, DoubleHash<STRING, STRING> user_pass)
{
  if(username == "all")
  {
    COUT << ENDL << user_pass << ENDL;
  }
  else
  {
    if(!user_pass.contains(username))
    {
      COUT << "username not in hash table" << ENDL;
    }
    else
    {
      COUT << "username: " << username << ENDL;
      COUT << "password: " << user_pass[username] << ENDL;
    }
  }


}
