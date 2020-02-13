#include <iostream>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise23.cpp


Problem: Given a start, stop value generate a range [start, stop) with a stride of 10.

Topics: Loops

*/

int main()
{

  /* Type your code here. */

  int start;
  int stop;

  cin >> start;
  cin >> stop;

  // check for invalid case
  if (stop < start)
  {
    cout << "invalid range" << endl;
  }

  else
  {
    // use for loop to generate range (start, stop, stride)
    for (int i = start; i <= stop; i += 10)
    {
      // print range value
      cout << i << " ";
    }
    cout << endl;
  }

  return 0;
}