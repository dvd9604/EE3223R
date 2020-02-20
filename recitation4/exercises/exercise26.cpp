#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise26.cpp

Problem: Given the weights of 10 wrestling players. Print the average weight, max weight, and total team weight.

Topics: Arrays, Vectors
*/

int main()
{

    /* Type your code here. */

    cout << fixed << setprecision(2);

    vector<double> userWeights;
    double totalWeight = 0;
    double maxWeight;

    for (int i = 0; i < 10; i++)
    {
        double curVal;
        // prompt user
        cout << "Enter weight " << i + 1 << endl;
        cin >> curVal;

        // update total weight
        totalWeight += curVal;

        // assign max weight at i =0, and update when curVal is greater
        if (i == 0 || curVal > maxWeight)
        {
            maxWeight = curVal;
        }

        // populate vector userWeights
        userWeights.push_back(curVal);
    }

    // assign average
    double averageWeight = totalWeight / 10;

    // printing logic
    cout << "You Entered ";

    for (auto d : userWeights)
    {
        cout << d << " ";
    }
    cout << endl;
    cout << " Total Weight " << totalWeight << endl;
    cout << " Average Weight " << averageWeight << endl;
    cout << " Max Weight " << maxWeight << endl;

    return 0;
}