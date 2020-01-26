# Recitation 1 Notes

# VS Code

Download and install from the following URL.
https://code.visualstudio.com/

## GCC

### Windows

See attached PDF `./windows_install_MinGW.pdf`.

### Linux (ubuntu)

```shell
$ sudo apt update
$ sudo apt install build-essential
```

### OSX

```shell

$ brew update
$ brew install gcc

```

## Shell Basics

Here are some basic shell commands I will be using.

```shell
$ cd <path> # change directory
$ ls <path> # list directory
$ rm <path> # remove file
$ mkdir <name> # create directory with name
```

## How to Compile and Run C++

```shell
# compile
g++ <cppfile> -o <outputfilename>
# run
./<outputfilename>
```

## Structure of a Program

- #include: Preprocessor directive, #. Includes additional code you need linked into your program
- Namespace: Library references that simplify your writing.
- Main: Starting point for your program
- Functions: Blocks of code, grouped together, to enhance code reuse and abstraction
- Classes: Code written in a manner that allows for a high degree of reusability and flexibility.

## Fundamental Data Types

| Type      | Typical Size (approx)    | Usage                             |
| --------- | ------------------------ | --------------------------------- |
| Character | 1 bytes                  | Store single characters. 'A'      |
| Integer   | 4 bytes                  | Store integers 1                  |
| Float     | 4 bytes                  | Store floating point numbers 0.01 |
| Bool      | Implementation dependent | Store true/false values           |
| void      |                          |                                   |

## Variables

Every variable has the following properties: `name`, `type`, `size`, `value`.

```
int x = 10;

name: variable identifier, x
type: data type of variable, int
size: size in memory, 32 bits
value: value stored in memory, 10

```

## Input Output

| Standard File   | File Pointer | Device      |
| --------------- | ------------ | ----------- |
| sandard input   | stdin        | keyboard    |
| standard output | stdout       | screen      |
| standard error  | stderr       | your screen |

## Escape Sequences

| Escape Sequence | Meaning                                                                   |
| --------------- | ------------------------------------------------------------------------- |
| \               | Escape. Escapes the next character. i.e. [", ', \]                        |
| \n              | Newline. Position the cursor to the beginning of the next line.           |
| \t              | Horizontal tab. Move the cursor to the next tab stop.                     |
| \r              | Carriage return. Position the cursor to the beginning of the current line |
