#include <iostream>
using namespace std;
/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise23.cpp


Problem: Given two integers a and b, swap them via a function

Topics: Functions

*/

void swap(int &x, int &y)
{
  /*
  Function swaps two values x and userVal two with each other
  */

  // store y in temp
  int temp = y;
  // override y with x
  y = x;
  // override x with temp
  x = temp;
}
int main()
{
  /* Type your code here. Your code must call the function.  */

  // two integers a and b
  int a;
  int b;

  // cin the values
  cin >> a;
  cin >> b;

  // make call to swap function, pass a and b
  swap(a, b);

  // print out a & b their values should be swapped
  cout << a << " " << b << endl;

  return 0;
}