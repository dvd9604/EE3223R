#include <iostream>
#include <vector>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise34.cpp


Problem: Create a phone number lookup contact list. Write a function to
return a corresponding phone number given a contact's name.

Topics: Functions

*/

string getNumber(vector<string> contactNames, vector<string> contactNumbers, string targetName)
{
  /*  
  Function returns the corresponding number value based on if targetName is in contactNames
 */
  for (int i = 0; i < contactNames.size(); i++)
  {
    // check to see if targetName is found
    if (contactNames.at(i) == targetName)
    {
      // return index of found location
      return contactNumbers.at(i);
    }
  }
  // default return if word is not in words
  return "Not Found";
}

int main()
{
  /* Type your code here */

  // number of inputs
  int numOfVals;

  vector<string> contacts;
  vector<string> numbers;

  string curVal;

  cin >> numOfVals;

  // for loop stores/populates vectors
  for (int i = 0; i < numOfVals; i++)
  {
    cin >> curVal;
    contacts.push_back(curVal);

    cin >> curVal;
    numbers.push_back(curVal);
  }

  // get name of target contact
  cin >> curVal;

  // print number of target contact
  cout << getNumber(contacts, numbers, curVal) << endl;

  return 0;
}
