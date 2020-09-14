#include "../include/DoubleHash.h"
#include <string>
#include <iostream>

#define STRING std::string
#define COUT std::cout
#define CIN std::cin
#define ENDL std::endl



std::vector<STRING> prohibitedWords(){
    bool cont = true;
    std::vector< STRING > words;
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

bool checkPW(STRING password, std::vector<STRING> words) {
  if(password.length() < 8)
  {
    COUT << "Password does not meet specifications";
    return false;
  }
  // iterate through the prohibited words
  for(unsigned int i = 0; i < words.size(); ++i)
  {
      // maximum beginning index for a substring to look for prohibited word
      long unsigned int maxIndex = password.length() - words[i].length();
      COUT << words[i] << '\t' << "maxIndex: " << maxIndex << ENDL;
      if(words[i] == password)
      {
          COUT << "not a valid password" << ENDL;
          return false;
      }
      // checks substrings
      for(unsigned int j = 0; j <= maxIndex; ++j)
      {
        STRING temp = password.substr(j, words[i].length());
        COUT << "SUBSTRING" << temp << ENDL << ENDL;
        if(temp == words[i])
        {
          COUT << "not a valid password" << ENDL;
          return false;
        }
      }
  }
  return true;
}

void create_user(DoubleHash<STRING, STRING> user_pass){
  std::vector< STRING > words = prohibitedWords();
  printProhibit(words);


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
}

bool login(DoubleHash<STRING, STRING> user_pass){
  STRING user = "";
  STRING pass = "";

  COUT << "user: ";
  CIN >> user;
  //COUT << ENDL;

  if(user_pass.contains(user))
  {
    COUT << "user found!" << ENDL;

    COUT << "PASS: ";
    CIN >> pass;
    //COUT << ENDL;

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
