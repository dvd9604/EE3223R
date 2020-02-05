#include <iostream>
#include <string>
#define pass
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise24.cpp


Problem: Given a month and day return the current season on that day of the month.

Topics: branching

*/

/*
1	January	31 days
2	February	28 days, 29 in leap years
3	March	31 days
4	April	30 days
5	May	31 days
6	June	30 days
7	July	31 days
8	August	31 days
9	September	30 days
10	October	31 days
11	November	30 days
12	December	31 days
*/

int main()
{

  // initial variables
  string inputMonth;
  int inputDay;

  // capture input
  cin >> inputMonth;
  cin >> inputDay;

  // thirteen branches 12 for each month 1 default else
  // use day of month to determine season if month has multiple seasons

  if (inputMonth == "January" && inputDay > 0 && inputDay <= 32)
  {
    cout << "Winter" << endl;
  }

  else if (inputMonth == "February" && inputDay > 0 && inputDay <= 29)
  {
    cout << "Winter" << endl;
  }

  else if (inputMonth == "March" && inputDay > 0 && inputDay <= 31)
  {
    if (inputDay < 20)
    {
      cout << "Winter" << endl;
    }
    else
    {
      cout << "Spring" << endl;
    }
  }
  else if (inputMonth == "April" && inputDay > 0 && inputDay <= 30)
  {
    cout << "Spring" << endl;
  }
  else if (inputMonth == "May" && inputDay > 0 && inputDay <= 31)
  {
    cout << "Spring" << endl;
  }
  else if (inputMonth == "June" && inputDay > 0 && inputDay <= 30)
  {
    if (inputDay < 21)
    {
      cout << "Spring" << endl;
    }
    else
    {
      cout << "Summer" << endl;
    }
  }
  else if (inputMonth == "July" && inputDay > 0 && inputDay <= 31)
  {
    cout << "Summer" << endl;
  }
  else if (inputMonth == "August" && inputDay > 0 && inputDay <= 31)
  {
    cout << "Summer" << endl;
  }
  else if (inputMonth == "September" && inputDay > 0 && inputDay <= 30)
  {
    if (inputDay < 22)
    {
      cout << "Summer" << endl;
    }
    else
    {
      cout << "Fall" << endl;
    }
  }
  else if (inputMonth == "October" && inputDay > 0 && inputDay <= 31)
  {
    cout << "Fall" << endl;
  }
  else if (inputMonth == "November" && inputDay > 0 && inputDay <= 30)
  {
    cout << "Fall" << endl;
  }
  else if (inputMonth == "December" && inputDay > 0 && inputDay <= 31)
  {
    if (inputDay < 20)
    {
      cout << "Fall" << endl;
    }
    else
    {
      cout << "Winter" << endl;
    }
  }
  else
  {
    cout << "Invalid Month or Day" << endl;
  }

  return 0;
}