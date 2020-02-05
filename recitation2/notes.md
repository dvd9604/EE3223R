# Recitation 2 Notes

## Arithmetic Operators

Think back to order of operations and PEMDAS.

| Symbol | Arithmetic Operator | Example |
| ------ | ------------------- | ------- |
| +      | Addition            | x + 7   |
| -      | Subtraction         | x - 4   |
| \*     | Multiplication      | 3 \* 5  |
| /      | Division            | 5 / y   |
| %      | Modulus             | r % 2   |

## Logical Operators

| Symbol | Logical Operator         | Example |
| ------ | ------------------------ | ------- |
| <      | Less than                | x < 7   |
| >      | greater than             | x > 4   |
| <=     | less than or equal to    | 3 <= 5  |
| >=     | greater than or equal to | 5 >= y  |
| ==     | equality                 | r == 2  |
| !=     | not equal                | r != 2  |

## String Methods

str.find(char c, size_t pos)

```
Usage: Find index position of a character.

Parameters
- c Character to locate.
- pos Index of character to search from (default 0).

Returns
- Index of first occurrence.
- If not found, returns npos.

```

str.substr(size_t pos, size_t n)

```
Usage: Get a substring.

Parameters
- pos Index of first character (default 0).
- n Number of characters in substring (default remainder).

Returns
- The new string.
- std::out_of_range If \_\_pos > size().
```
