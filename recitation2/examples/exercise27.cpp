#include <iostream>
#include <string>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise27.cpp


Problem: Format full names into short forms. 

Topics: String methods, branching

*/

int main()
{

  /* Type your code here. */

  // grab input full name
  string fullName;
  getline(cin, fullName);

  // Try to split full name into parts based on spaces
  int spaceOne = fullName.find(' ');
  int spaceTwo = fullName.find(' ', spaceOne + 1);

  // strings to hold all the name parts
  string middleName;
  string firstName;
  string lastName;

  // slice out first name from full name based on space1
  firstName = fullName.substr(0, spaceOne);

  // if space two exists
  if (spaceTwo != string::npos)
  {
    // slice out middle name from full name based on space1 and space2
    middleName = fullName.substr(spaceOne + 1, spaceTwo - (spaceOne + 1));
    // slice out last name from full name based on space2
    lastName = fullName.substr(spaceTwo + 1, fullName.length() - (spaceTwo + 1));
  }
  // if there is no second space that means only first name and last name were entered
  else
  {
    // slice out last name from full name based on space1
    lastName = fullName.substr(spaceOne + 1, fullName.length() - (spaceOne + 1));
  }

  // select print format based on middleName being non empty
  if (middleName.empty())
  {
    cout << lastName << ", " << firstName.substr(0, 1) << "." << endl;
  }
  else
  {
    cout << lastName << ", " << firstName.substr(0, 1) << "." << middleName.substr(0, 1) << "." << endl;
  }

  return 0;
}