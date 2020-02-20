#include <iostream>
#include <vector>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise24.cpp

Problem: Given a vector of size n composed of integers, and a upper and lower bound. 
Print all values within the range (inclusive)

Topics: Arrays, Vectors
*/
int main()
{

    /* Type your code here. */

    int numOfInputs;
    vector<int> data;
    int curVal;
    int lowerBound;
    int upperBound;

    // grab number of inputs
    cin >> numOfInputs;

    // populate vector via loop and cin
    for (int i = 0; i < numOfInputs; i++)
    {
        cin >> curVal;
        data.push_back(curVal);
    }

    // grab bounds
    cin >> lowerBound;
    cin >> upperBound;

    // loop through data and print only data points within range
    for (auto i : data)
    {
        if (i >= lowerBound && i <= upperBound)
        {
            cout << i << " ";
        }
    }

    return 0;
}
