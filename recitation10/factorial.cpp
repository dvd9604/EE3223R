#include <iostream>

using namespace std;

/*
Factorial calculation 
0! = 1
1! = 1
2! = 2 * 1
3! = 3 * 2 * 1
4! = 4 * 3 * 2 * 1

n! = n * (n-1) ... (1)
*/

int factorial_recursive(int n)
{
    // base case
    if (n <= 1)
        return 1;
    // recursive case
    else
        return n * factorial_recursive(n - 1);
}

int factorial_iterative(int n)
{
    // default value for factorial of n
    int out = 1;

    for (int i = 1; i <= n; i++)
    {
        out = out * i;
    }
    return out;
}

int main(int argc, char const *argv[])
{

    cout << factorial_recursive(4) << endl;
    cout << factorial_iterative(4) << endl;
    return 0;
}
