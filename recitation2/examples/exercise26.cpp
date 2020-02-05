#include <iostream>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise26.cpp


Problem: Calculate if a given year is a leap year

Topics: branching, modulus operator

*/

int main()
{
  int inputYear;
  bool isLeapYear = false;

  cin >> inputYear;

  if (inputYear % 4 == 0)
  {
    if (inputYear % 100 == 0)
    {
      if (inputYear % 400 == 0)
      {
        // if %4 and %100 and % 400 then is leap year
        isLeapYear = true;
      }
    }
    else
    {
      // if only %4 then is also leap year
      isLeapYear = true;
    }
  }

  // all other cases default to false

  if (isLeapYear)
  {
    cout << inputYear << " - leap year" << endl;
  }
  else
  {
    cout << inputYear << " - not a leap year" << endl;
  }

  return 0;
}