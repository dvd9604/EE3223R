#include <iostream>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise22.cpp


Problem: Countdown until matching digits

Topics: Loops

*/

int main()
{

  /* Type your code here. */

  int inputNumber;

  cin >> inputNumber;

  if (inputNumber < 20 || inputNumber >= 98)
  {
    cout << "invalid" << endl;
  }

  else
  {
    while (true)
    {

      // mod op gives right digit
      int rightDigit = inputNumber % 10;
      // div op gives left digit
      int leftDigit = inputNumber / 10;

      // compare digits
      if (rightDigit == leftDigit)
      {
        // if same (ex. 11) print and break
        cout << inputNumber << endl;
        break;
      }

      // decrement and continue looping
      inputNumber--;
    }
  }

  return 0;
}