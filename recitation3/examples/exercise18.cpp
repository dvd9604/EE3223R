#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise18.cpp


Problem: Given a string s, check if it is a sting representation of a number.

Topics: Loops

*/

int main()
{
  string userString;
  cin >> userString;

  /* Type your code here. */

  // bool to hold our truthiness
  bool isNumber = true;

  // loop through userString
  for (auto ch : userString)
  {
    // check if current char is a digit (0-9)
    if (!isdigit(ch))
    {
      // if not number, set bool false and break
      isNumber = false;
      break;
    }
  }

  //print logic
  if (isNumber)
  {
    cout << isNumber << endl;
  }

  else
  {
    cout << isNumber << endl;
  }
  return 0;
}
