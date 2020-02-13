#include <iostream>
#include <string>
using namespace std;
/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise21.cpp


Problem: Given a string s, count it's length.

Topics: Loops

*/

int main()
{
  string userText;
  // Add more variables as needed

  getline(cin, userText); // Gets entire line, including spaces.

  /* Type your code here. */

  int count = 0;

  for (auto ch : userText)
  {
    // ignore all chars but spaces, exclamation points, and dollar signs
    if (ch != ' ' && ch != '!' && ch != '$')
    {
      count++;
    }
  }

  // print out final count
  cout << count << endl;

  return 0;
}
