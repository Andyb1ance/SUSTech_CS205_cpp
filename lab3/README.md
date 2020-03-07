# Lecture 3

- Compound Types
- Managing memory for data

## Compound Types

- Arrays
- Array-style strings
- string-class strings
- structures
- unions
- enumerations
- pointers

### Array

A data form that can hold several values, all of one type

### Array-style Strings

a series of characters stored in consecutive bytes of memory

- c-style array string
  - an array of char
  - last char of every string is the **null** character (\0) with ASCII code 0, mark the string's end
  - `char cat[4] = {'c', 'a', 't', '\0'};`
- string class library
  - a double quoted string
  - string constant or string literal
  - include null implicitly
  - `char cat[] = "cat";`
  - make sure the array is large enough
- String input
  - white space causes a problem
  - `cin.getline()` and `cin.get()`

### String-class strings

C++ library, include the string header file
`#include<string>`

- three functions for array-style string
  - `strcpy()` -> `=`
  - `sttcat()` -> `+=`
  - `strlen()` -> `.size()`
- simpler and more safe

### Structures, Unions and Enumerations

A structure is a more versatile data form than an array, A structure is a user-definable type

- `stuct`

A union is a data format can hold different data types but only one type at a time

- `union`

The Cpp enum facility provides an alternative to const for creating symbolic constants

- `enum`

### Pointers

why need a pointer type?

- three fundamental properties of declaration
  - where data is stored
  - what value is kept there - we know
  - what type of data - we know

how to know where the data is stored

- address operator & to access the address
- hexadecimal notation to display the address values

pointer type

- using new strategy: pointer type
  - inverse way
  - \*

One essential to the cpp programming philosophy of is the memory management

### Managing memory for data

- automatic storage
  - stack, LIFO
- static storage
  - `static`
- Dynamic storage
  - `new` and `delete`
  - free store or heap
