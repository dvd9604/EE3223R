#include <iostream>
#include <cmath>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise24.cpp


Problem: Given two integers a and b return the one with a greater magnitude via a function

Topics: Functions

*/

int maxMag(int x, int y)
{

  /*
  Function returns the integer with the highest magnitude
  */

  // use absolute value function keep only magnitude of values
  if (abs(x) > abs(y))
  {
    return x;
  }
  else
  {
    return y;
  }
}

/* Define your function here */

int main()
{
  /* Type your code here */

  // two integers a and b
  int a;
  int b;

  // cin the values
  cin >> a;
  cin >> b;

  // make call to max magnitude function, pass it out
  cout << maxMag(a, b) << endl;

  return 0;
}
