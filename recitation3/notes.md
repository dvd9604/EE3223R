# Recitation 2 Notes

## Types of Loops

- Entry based
  - for loop
  - while loop
- Exit based
  - do while loop

* Components
  - condition
  - body

## While Loop

while loops repeat a set of statements inside their loop body given that a conditional expression is true. While loops are ideal when it is not clear how many iterations are needed to perform a particular task.

```cpp

while (conditional_expression)
{
  // loop body
  // execution statements

  // conditonal variable updated for reevaluation
  update_expression;
}
```

- Sentinel: A sentinel value is a special value indicating the end of a list. Typically this value is used to terminate a loop. Ex. continue entering whole numbers, to stop enter -1.

## For Loop

For loops repeat a set of statements inside their loop body a set number of iterations based on an iterator variable, condition, and increment/decrement statements.

```cpp

for (initialization expr; test expr; update expr)
{

  // loop body
  // execution statements
}
```

## Do While Loop

Do while loops behaves similar to the while loop, but the conditonal expression is evaulated at the end of the loop's body.

```cpp
do {
  // loop body
  // execution statements
}
while (condconditional_expressionition);

```
