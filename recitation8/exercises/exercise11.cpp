#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{

    // table headers
    string title;
    string col1Header, col2Header;
    string inputStr;

    //key = author, value = count
    // data vectors
    vector<string> keys;

    vector<int> values;

    // input stream for conversions and redirections
    istringstream inputStream;

    // input title
    cout << "Enter a title for this data: ";
    getline(cin, title);

    // input headers
    cout << "Enter the column 1 header: ";
    getline(cin, col1Header);

    cout << "Enter the column 2 header: ";
    getline(cin, col2Header);

    /*
    datapoint format
    key, value
    Jane Austin, 6
    */

    while (true)
    {
        cout << "Enter a datapoint (-1 to quit)" << endl;
        getline(cin, inputStr);

        //stopping logic
        if (inputStr == "-1")
        {
            break;
        }

        int commaLoc = inputStr.find(',');

        if (commaLoc != string::npos)
        {
            //split
            string key = inputStr.substr(0, commaLoc);
            string valueStr = inputStr.substr(commaLoc + 2);

            //check for additional commas in valueStr
            if (valueStr.find(',') != string::npos)
            {
                cout << "Error: Too many commas in input" << endl;
                continue;
            }

            int value;
            // Type conversion from string to int via inputstream
            inputStream.clear();
            inputStream.str(valueStr);
            inputStream >> value;

            // check for successful conversion

            if (inputStream.fail())
            {
                cerr << "Error: conversion failed " << endl;
                continue;
            }

            // store datapoints in vectors
            keys.push_back(key);
            values.push_back(value);
        }
        else
        {
            cout << "No comma in string." << endl;
            continue;
        }
    }

    // table printing

    // title
    cout << right << setw(33) << title << endl;
    // headers
    cout << left << setw(20) << col1Header << "|";
    cout << right << setw(23) << col2Header << endl;
    // cout << "--------------------------------------------" << endl;

    cout << setfill('-') << setw(44) << "" << endl;

    // rows
    for (int i = 0; i < keys.size(); i++)
    {
        cout << left << setw(20) << keys.at(i) << "|" << right << setw(23) << values.at(i) << endl;
    }

    // histogram
    for (int i = 0; i < keys.size(); i++)
    {
        cout << right << setw(20) << keys.at(i) << " ";

        // stars
        for (int j = 0; j < values.at(i); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
