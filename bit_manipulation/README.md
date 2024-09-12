# Bit Manipulation Tasks in C

This repository contains several C functions that perform various bit manipulation operations. Below are the details of each task and the corresponding files.

## Table of Contents

- Task 0: 0
- Task 1: 1
- Task 2: 10
- Task 3: 11
- Task 4: 100
- Task 5: 101

## Task 0: 0

Write a function that converts a binary number to an unsigned int.

- **Prototype:** `unsigned int binary_to_uint(const char *b);`
- **Description:**
  - Converts a binary number represented as a string of `0` and `1` chars to an unsigned int.
  - Returns the converted number, or `0` if there is one or more chars in the string `b` that is not `0` or `1`, or if `b` is `NULL`.
- **File:** [0-binary_to_uint.c](0-binary_to_uint.c)

## Task 1: 1

Write a function that prints the binary representation of a number.

- **Prototype:** `void print_binary(unsigned long int n);`
- **Description:**
  - Prints the binary representation of a number.
  - You are not allowed to use arrays, `malloc`, the `%` or `/` operators.
- **File:** [1-print_binary.c](1-print_binary.c)

## Task 2: 10

Write a function that returns the value of a bit at a given index.

- **Prototype:** `int get_bit(unsigned long int n, unsigned int index);`
- **Description:**
  - Returns the value of the bit at the specified index.
  - Returns `-1` if an error occurred.
- **File:** [2-get_bit.c](2-get_bit.c)

## Task 3: 11

Write a function that sets the value of a bit to `1` at a given index.

- **Prototype:** `int set_bit(unsigned long int *n, unsigned int index);`
- **Description:**
  - Sets the value of the bit at the specified index to `1`.
  - Returns `1` if it worked, or `-1` if an error occurred.
- **File:** [3-set_bit.c](3-set_bit.c)

## Task 4: 100

Write a function that sets the value of a bit to `0` at a given index.

- **Prototype:** `int clear_bit(unsigned long int *n, unsigned int index);`
- **Description:**
  - Sets the value of the bit at the specified index to `0`.
  - Returns `1` if it worked, or `-1` if an error occurred.
- **File:** [4-clear_bit.c](4-clear_bit.c)

## Task 5: 101

Write a function that returns the number of bits you would need to flip to get from one number to another.

- **Prototype:** `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- **Description:**
  - Returns the number of bits you would need to flip to get from one number to another.
  - You are not allowed to use the `%` or `/` operators.
- **File:** [4-clear_bit.c](5-flip_bits.c)
