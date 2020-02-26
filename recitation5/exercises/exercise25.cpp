#include <iostream>
#include <cstdlib>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise25.cpp


Problem: Write a function to perform a coin toss and return its outcome

Topics: Functions

*/

/* Define your function here */
string toss()
{
  /*
  Function simulates a coin toss
  */

  // will give either 0 or 1 randomly (even or odd)
  int tosVal = rand() % 2;

  if (tosVal == 1)
  {
    // let 1 be tails
    return "tails";
  }
  else
  {
    // let 0 be heads
    return "heads";
  }
}

int main()
{

  // seed for reproducibility
  srand(2);

  /* Type your code here */

  // user inputs number of tosses desired
  int numOfTosses;
  cin >> numOfTosses;

  // for loop runs and performs each toss
  for (int i = 0; i < numOfTosses; i++)
  {
    // print out toss functions outcome
    cout << toss() << endl;
  }

  return 0;
}
