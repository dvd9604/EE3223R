#include <iostream>

using namespace std;

/*
GCD calculator

quick and dirty GCD algo

let a = 27, b = 18 (ans = 9)

if (a > b) then a = a - b
if (b > a) then b = b - a

stop if a == b then a is your GCD

a   b
27  18 // a is bigger
9   18 // b is bigger
9   9  // they are equal

so 9 much be the GCD
*/

int gcd_recursive(int a, int b)
{

    if (a == 0 || b == 0)
        return 0;
    // base case
    else if (a == b) // if they are equal
        return a;
    //recursive case
    else if (a > b)
        return gcd_recursive(a - b, b); // if a is bigger
    else
        return gcd_recursive(a, b - a); // if b is bigger
}

int gcd_iterative(int a, int b)
{
    while (a != b)
    {
        if (a > b) // if a is bigger
            a -= b;
        else if (a < b) // if b is bigger
            b -= a;
        else // if equal
            break;
    }
    return a; // return gcd
}

int main(int argc, char const *argv[])
{
    /* code */
    cout << gcd_recursive(27, 18) << endl;
    cout << gcd_iterative(18, 27) << endl;

    return 0;
}
