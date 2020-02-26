# Recitation 5 Notes

Modified from https://www.geeksforgeeks.org/functions-in-c/

## Reasons for Functions

- code reusability
- eliminate redundancy
- abstraction

## Things to Keep in Mind

When writing functions think of the return type the function needs. Think of what arguments may need to be defined. When naming functions try to follow specific conventions and pick a name which offers some context into what the function does.

## Pass by value

Values passed to function are copied into the local scope. The original values are not modified.
This is the default mode for functions.

```cpp

void myFunction(int x)
{
   x = 60;
}

int main(void)
{
    int x = 10;
    // function will not affect original value of x
    fun(x);
    // output will be 10
    cout << x << endl;
    return 0;
}


```

## Pass by reference

Values passed to function refer to original values at their memory location. Any changes made inside the function scope
persist once the function exists.

```cpp

void myFunction(int *ptr)
{
   *ptr = 60;
}

int main(void)
{
    int x = 10;
    // function will modify original value
    fun(&x);
    // output will be 60
    cout << x << endl;
    return 0;
}

```
