

#include <iostream>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise20.cpp


Problem: Given a string s, remove all spaces from it.

Topics: Loops

*/

int main()
{

  /* Type your code here. */

  string userInput;

  // output string which will be generated from user input
  string output;

  getline(cin, userInput);

  for (auto ch : userInput)
  {
    //check for spaces
    if (ch != ' ')
    {
      // add non space char to output string
      output += ch;
    }
  }

  // print reconstructed output
  cout << output << endl;

  return 0;
}