#include <iostream>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise25.cpp


Problem: Evenly divide given coinage into most efficient coins denominations

Topics: integer division, branching

*/

/*
dollar: 1.00
quarter: 0.25
dimes: 0.10
nickels: 0.05
pennies: 0.01

*/

#include <iostream>
using namespace std;

int main()
{
  int totalCents;

  cin >> totalCents;

  if (totalCents <= 0)
  {
    cout << "No change" << endl;
  }
  else
  {
    int numDollars;
    int numQuarters;
    int numDimes;
    int numNickels;

    // calculate how many dollar coins are possible in totalCents
    numDollars = totalCents / 100;
    // subtract amount from total before next calculation
    totalCents -= numDollars * 100;

    numQuarters = totalCents / 25;
    totalCents -= numQuarters * 25;

    numDimes = totalCents / 10;
    totalCents -= numDimes * 10;

    numNickels = totalCents / 5;
    totalCents -= numNickels * 5;

    // at this point totalCents is equivalent to number of pennies remaining

    if (numDollars > 0)
    {
      if (numDollars == 1)
      {
        cout << numDollars << " Dollar" << endl;
      }
      else
      {
        cout << numDollars << " Dollars" << endl;
      }
    }

    if (numQuarters > 0)
    {
      if (numQuarters == 1)
      {
        cout << numQuarters << " Quarter" << endl;
      }
      else
      {
        cout << numQuarters << " Quarters" << endl;
      }
    }

    if (numDimes > 0)
    {
      if (numDimes == 1)
      {
        cout << numDimes << " Dime" << endl;
      }
      else
      {
        cout << numDimes << " Dimes" << endl;
      }
    }

    if (numNickels > 0)
    {
      if (numNickels == 1)
      {
        cout << numNickels << " Nickel" << endl;
      }
      else
      {
        cout << numNickels << " Nickels" << endl;
      }
    }

    if (totalCents > 0)
    {
      if (totalCents == 1)
      {
        cout << totalCents << " Penny" << endl;
      }
      else
      {
        cout << totalCents << " Pennies" << endl;
      }
    }
  }
  return 0;
}