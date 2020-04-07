# Midterm II Review

## Style

- In class problems
- Take home coding challenge

## Zybook Chapters

Functions, Classes, Templates, Recursion
6, 7, 8, 11, 13 (inclusive)

Bare Bones Problems

- 6.41
- 7.21
- 7.22
- 8.13
- 8.14
- 11.13
- 13.6

## Lecture Slides

7-17

## Topics in Detail

- Functions

  - What is a function?

    - A function is a named list of statements. It consists of a function definition. It aids in repeating tasks.

  - How do we pass parameters?
    - parameters are passed in the () of the function call
  - What is a function prototype?

    - Prototype tells us

      - Return type of function
      - Name of the function
      - Parameter data types and possibly names

      ```
      void PrintPizzaArea(double pizzaDiameter);
      ```

      - return type: `void`
      - function name: `PrintPizzaArea`
      - Parameter type & name: `double pizzaDiamater`

* What is the function's scope?

  - Everything within the brackets of the function

* How to return values?

  - using the `return` keyword followed by the value.

* Objects and Classes

  - What is a class?

    - a blueprint for an object.
    - a class tells us two things
      - what an object is
      - what an object can do

  - What is an object?

    - An instance of a class

  - Private vs Public vs Protected members
    - Public: all operations can be performed by class user
    - Private: Operations restricted to class members only (DEFAULT)
    - Protected: Operations useable by derived classes

  ```

  int main() {
    Restaurant favLunchPlace;

    favLunchPlace.rating = 5;
    ...
  }
  class Restaurant {                          // Keeps a user's review of a restaurant
    public:
        void SetName(string restaurantName);  // Sets the restaurant's name
        void SetRating(int userRating);       // Sets the rating (1-5, with 5 best)
        void Print();                         // Prints name and rating on one line
    private:
        string name;
        int rating;
  };
  ```

  - Constructors and Destructors

    - Constructor member function gets called automatically when a variable of that class is declared. It returns a pointer to that object if called with the `new` keyword.
    - Typically used to assign data member values on creation

    - Destructor member function that gets called when a variable is deleted or goes out of scope.

  - Copy Constructor what is it good for?
    - Useful for creating deep copies of objects.
  - Const operator
    - forces a complier check to make sure method does not modify any data members
  - Accessors/Getters
    - method that accesses data members
  - Mutators/Setters
    - method that modifies data members
  - PROBLEM: RECTANGLE CLASS from lecture

* Pointers & Dynamic Memory Allocation

  - new operator

    - allocates memory for given type and returns a pointer to that memory.

  - delete operator

    - deallocates memory

  - How are objects created by allocating memory dynamically?

  ```
  // given point class has already been defined
  Point * myPoint = new Point(2,3);
  ```

  - When and how are objects deleted?
    - objects are deleted if out of scope or if manually deleted
  - Iterate through an array given only a pointer to the first element

* Templates

  - What are function templates?i
    - allows for multiple sets of inputs to be supports for an operation. Prevents writing a function twice since compilier will produce them.
  - What are class templates?
    - Multiple classes may be nearly identical, differing only in their data types. The following shows a class managing three int numbers, and a nearly identical class managing three short numbers.
  - How does the complier determine correct template to use?
    - The compiler automatically generates a unique function definition for each type appearing in function calls to the function template.

* Recursion

  - What is recursion?

    - A recursive algorithm solves a problem by breaking that problem into smaller subproblems, solving these subproblems, and combining the solutions.

    ```

    #include <iostream>
    using namespace std;

    void CountDown(int countInt) {
      if (countInt == 0) {
          cout << "GO!\n";
      }
      else {
          cout << countInt << endl;
          CountDown(countInt - 1);
      }
    }

    int main() {
      CountDown(2);
      return 0;
    }
    ```

  - Recursion vs Iteration?
    - all recursive steps can be done through iteration
  - fibonacci Example
    - 13.6
