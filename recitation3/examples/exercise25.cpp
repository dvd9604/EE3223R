#include <iostream>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise25.cpp


Problem: Given a string s, check if s is a palindrome.

Topics: Loops

*/

int main()
{

  /* Type your code here. */

  string inputStr;
  // string to hold reverse of input
  string reverseStr;

  getline(cin, inputStr);

  // use for loop to generate reverse string (traverse backwards)
  for (int i = inputStr.size() - 1; i >= 0; i--)
  {
    reverseStr += inputStr.at(i);
  }

  // check if inputStr is same as reverseStr (palindromes this must be true)
  if (inputStr == reverseStr)
  {
    cout << "is a palindrome" << endl;
  }
  else
  {
    cout << "is not a palindrome" << endl;
  }

  return 0;
}