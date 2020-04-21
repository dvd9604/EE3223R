#include <iostream>
#include "sequence.h"

using namespace std;

void print_sequence(sequence sq)
{
    for (sq.start(); sq.is_item(); sq.advance())
    {
        cout << sq.current() << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{

    sequence test;

    test.start();
    test.insert(42.1);
    test.insert(8.8);
    test.insert(99);

    print_sequence(test);

    return 0;
}