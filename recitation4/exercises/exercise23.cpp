#include <iostream>
#include <vector>
using namespace std;

/*
Class EE3223R C++ & Data Structures
Author: Divyaansh Dandona
Instructor: Dr. Jeff Prevost
File: exercise23.cpp

Problem: Given a vector of size n composed of strings and a character c. Print only those strings
which contain the character c. 

Topics: Arrays, Vectors
*/
int main()
{

    /* Type your code here. */
    int numOfInputs;
    vector<string> userWords;
    string curVal;
    char targetChar;

    // grab total number of inputs
    cin >> numOfInputs;

    // load in words via loop
    for (int i = 0; i < numOfInputs; i++)
    {
        cin >> curVal;
        userWords.push_back(curVal);
    }

    // grab target char
    cin >> targetChar;

    // loop through words and print only those with targetChar in them
    for (auto s : userWords)
    {
        // if char not found returns npos
        if (s.find(targetChar) != string::npos)
        {
            cout << s << endl;
        }
    }

    return 0;
}
