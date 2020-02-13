#include <iostream>
#include <string>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise19.cpp


Problem: Given a string s, replace characters according to the map below.

{
  i: !,
  a: @,
  t: 7,
  e: 3,
  o: 0
}

Topics: Loops

*/

int main()
{

  /* Type your code here. */

  string inputPassword;
  cin >> inputPassword;

  // loop through user password
  for (int i = 0; i < inputPassword.size(); i++)
  {

    // case to handle replacements
    switch (inputPassword.at(i))
    {

    case 'i':
      inputPassword.at(i) = '!';
      break;

    case 'a':
      inputPassword.at(i) = '@';
      break;

    case 't':
      inputPassword.at(i) = '7';
      break;

    case 'e':
      inputPassword.at(i) = '3';
      break;

    case 'o':
      inputPassword.at(i) = '0';
      break;

    default:
      continue;
    }
  }

  // append stronger string to password
  inputPassword += "^$^";

  cout << inputPassword << endl;

  return 0;
}