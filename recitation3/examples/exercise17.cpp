

#include <iostream>
#include <string>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise17.cpp


Problem: Given a character n, count how many times it occurs in string s.

Topics: Loops

*/

int main()
{
  /* Type your code here. */

  char targetChar;
  string inputString;

  int count = 0;

  cin >> targetChar;
  getline(cin, inputString);

  // METHOD 1 RANGE FOR LOOP
  // for (auto i : inputString)
  // {
  //   if (i == targetChar)
  //   {
  //     count++;
  //   }
  // }

  // METHOD 2 NAIVE FOR LOOP
  for (int i = 0; i < inputString.size(); i++) // loop through string
  {
    // check if current character at index i is equal to target
    if (inputString[i] == targetChar)
    {
      // if equal increment count by 1
      count++;
    }
  }

  // print out final count
  cout << count << endl;
  return 0;
}