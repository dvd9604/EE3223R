#include <iostream>
#include <vector>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise21.cpp

Problem: Given a vector of size n composed of integers. Subtract the min value in the vector from all elements

Topics: Arrays, Vectors
*/

int main()
{

    /* Type your code here. */

    vector<int> data;
    int numOfVals;
    int minVal;
    int currVal;

    cin >> numOfVals;

    // for loop to run number of times specified for input
    for (int i = 0; i < numOfVals; i++)
    {
        // grab new value
        cin >> currVal;

        // logic to assign min val at i = 0, and update when new value is lower
        if (i == 0 || currVal < minVal)
        {
            minVal = currVal;
        }
        // append data to vector
        data.push_back(currVal);
    }

    // ranged loop to print values
    for (auto n : data)
    {
        // subtraction before printing
        cout << n - minVal << " ";
    }

    cout << endl;

    return 0;
}
