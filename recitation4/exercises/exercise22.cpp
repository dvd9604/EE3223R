#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise22.cpp

Problem: Given a vector of size n composed of strings. Print the frequency of each string.

Topics: Arrays, Vectors
*/

int main()
{

    /* Type your code here. */

    vector<string> userWords;
    vector<int> wordFreq;

    int numOfInputs;
    string currVal;

    cin >> numOfInputs;

    // for loop to collect words
    for (int i = 0; i < numOfInputs; i++)
    {
        cin >> currVal;
        userWords.push_back(currVal);
    }

    // outer loop sets which word to conduct counting for
    for (auto n : userWords)
    {
        // reset count to 0
        int count = 0;
        // inner loop compares with outer loop to perform count
        for (auto j : userWords)
        {
            // check if n and j are equal
            if (n == j)
            {
                // increase count for word n
                count++;
            }
        }

        // push count into wordFreq vector
        wordFreq.push_back(count);
    }

    // since both vectors have the same length and the data corresponds
    // we can just print using index
    for (int i = 0; i < numOfInputs; i++)
    {
        cout << userWords.at(i) << " " << wordFreq.at(i) << endl;
    }

    return 0;
}
