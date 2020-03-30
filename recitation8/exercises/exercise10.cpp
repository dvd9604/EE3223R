#include <iostream>
#include <string>
using namespace std;

void print(string s)
{
    // print all chars in s which are not spaces
    // strip

    for (auto c : s)
    {
        if (c != ' ')
        {
            cout << c;
        }
    }
}

int main()
{

    /* Type your code here. */

    //format "a,b" => a and b split on comma

    // input string variable
    string inputStr;

    // split strings a and b of inputStr
    string a, b;

    while (true)
    {
        cout << "Enter user string: ";
        // extract user input into inputStr
        getline(cin, inputStr);

        // stopping/exiting condition
        if (inputStr == "q")
        {
            break;
        }

        int commaLoc = inputStr.find(',');

        if (commaLoc != string::npos)
        {
            // 0 1 2 3 4 5 6 7 8 9
            //"J i l l , A l l e n"
            //split
            a = inputStr.substr(0, commaLoc);
            b = inputStr.substr(commaLoc + 1);
        }
        else
        {
            // error
            cout << "Error comma not found" << endl;
            continue;
        }

        // print first word without spaces
        cout << "first word: ";
        print(a);
        cout << endl;

        // print second word without spaces
        cout << "second word: ";
        print(b);
        cout << endl;
    }
    return 0;
}