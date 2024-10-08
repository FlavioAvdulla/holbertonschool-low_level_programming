# C Programming Tasks

This repository contains several C functions that perform various operations. Below are the details of each task and the corresponding files.

## Table of Contents

- Task 0: isupper
- Task 1: isdigit
- Task 2: Collaboration is multiplication
- Task 3: The numbers speak for themselves
- Task 4: I believe in numbers and signs
- Task 5: Numbers constitute the only universal language
- Task 6: The shortest distance between two points is a straight line
- Task 7: I feel like I am diagonally parked in a parallel universe
- Task 8: You are so much sunshine in every square inch
- Task 9: Fizz-Buzz
- Task 10: Triangles

## Task 0: isupper

Write a function that checks for uppercase character.

- **Prototype:** `int _isupper(int c);`
- **Description:**
  - Returns `1` if `c` is uppercase.
  - Returns `0` otherwise.
  - FYI: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.
- **File:** [0-isupper.c](0-isupper.c)

## Task 1: isdigit

Write a function that checks for a digit (0 through 9).

- **Prototype:** `int _isdigit(int c);`
- **Description:**
  - Returns `1` if `c` is a digit.
  - Returns `0` otherwise.
  - FYI: The standard library provides a similar function: `isdigit`. Run `man isdigit` to learn more.
- **File:** [1-isdigit.c](1-isdigit.c)

## Task 2: Collaboration is multiplication

Write a function that multiplies two integers.

- **Prototype:** `int mul(int a, int b);`
- **File:** [2-mul.c](2-mul.c)

## Task 3: The numbers speak for themselves

Write a function that prints the numbers, from `0` to `9`, followed by a new line.

- **Prototype:** `void print_numbers(void);`
- **Description:**
  - You can only use `_putchar` twice in your code.
- **File:** [3-print_numbers.c](3-print_numbers.c)

## Task 4: I believe in numbers and signs

Write a function that prints the numbers, from `0` to `9`, followed by a new line.

- **Prototype:** `void print_most_numbers(void);`
- **Description:**
  - Do not print `2` and `4`.
  - You can only use `_putchar` twice in your code.
- **File:** [4-print_most_numbers.c](4-print_most_numbers.c)

## Task 5: Numbers constitute the only universal language

Write a function that prints `10` times the numbers, from `0` to `14`, followed by a new line.

- **Prototype:** `void more_numbers(void);`
- **Description:**
  - You can only use `_putchar` three times in your code.
- **File:** [5-more_numbers.c](5-more_numbers.c)

## Task 6: The shortest distance between two points is a straight line

Write a function that draws a straight line in the terminal.

- **Prototype:** `void print_line(int n);`
- **Description:**
  - You can only use `_putchar` function to print.
  - Where `n` is the number of times the character `_` should be printed.
  - The line should end with a `\n`.
  - If `n` is `0` or less, the function should only print `\n`.
- **File:** [6-print_line.c](6-print_line.c)

## Task 7: I feel like I am diagonally parked in a parallel universe

Write a function that draws a diagonal line on the terminal.

- **Prototype:** `void print_diagonal(int n);`
- **Description:**
  - You can only use `_putchar` function to print.
  - Where `n` is the number of times the character `\` should be printed.
  - The diagonal should end with a `\n`.
  - If `n` is `0` or less, the function should only print a `\n`.
- **File:** [7-print_diagonal.c](7-print_diagonal.c)

## Task 8: You are so much sunshine in every square inch

Write a function that prints a square, followed by a new line.

- **Prototype:** `void print_square(int size);`
- **Description:**
  - You can only use `_putchar` function to print.
  - Where `size` is the size of the square.
  - If `size` is `0` or less, the function should print only a new line.
  - Use the character `#` to print the square.
- **File:** [8-print_square.c](8-print_square.c)

## Task 9: Fizz-Buzz

The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.

- **Description:**
  - Each number or word should be separated by a space.
  - You are allowed to use the standard library.
- **File:** [9-fizz_buzz.c](9-fizz_buzz.c)

## Task 10: Triangles

Write a function that prints a triangle, followed by a new line.

- **Prototype:** `void print_triangle(int size);`
- **Description:**
  - You can only use `_putchar` function to print.
  - Where `size` is the size of the triangle.
  - If `size` is `0` or less, the function should print only a new line.
  - Use the character `#` to print the triangle.
- **File:** [10-print_triangle.c](10-print_triangle.c)
