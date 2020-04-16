#include <iostream>

using namespace std;

/*
f1 = 1
f2 = 1
f3 = f2 + f1
f4 = f3 + f2
fn = fn-1 + fn-2
*/

int fib_recursive(int n)
{
    if (n <= 1)
        return n;
    else
        return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int fib_iterative(int n)
{
    // a and b are n-1 and n-2 and out is the factorial
    int a = 0, b = 1, out = 0;

    for (int i = 0; i < n - 1; i++)
    {
        out = a + b;
        a = b;
        b = out;
    }
    return out;
}

int main(int argc, char const *argv[])
{
    cout << fib_recursive(4) << endl;
    cout << fib_iterative(4) << endl;
    return 0;
}
