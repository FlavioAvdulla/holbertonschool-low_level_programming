# Recursion Tasks in C

This repository contains several C functions that perform various operations using recursion. Below are the details of each task and the corresponding files.

## Table of Contents

- Task 0: She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
- Task 1: Why is it so important to dream? Because, in my dreams we are together
- Task 2: Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
- Task 3: You mustn't be afraid to dream a little bigger, darling
- Task 4: Once an idea has taken hold of the brain it's almost impossible to eradicate
- Task 5: Your subconscious is looking for the dreamer
- Task 6: Inception. Is it possible?

## Task 0: She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

Write a function that prints a string, followed by a new line.

- **Prototype:** `void _puts_recursion(char *s);`
- **Description:**
  - FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.
- **File:** [0-puts_recursion.c](0-puts_recursion.c)

## Task 1: Why is it so important to dream? Because, in my dreams we are together

Write a function that prints a string in reverse.

- **Prototype:** `void _print_rev_recursion(char *s);`
- **File:** [1-print_rev_recursion.c](1-print_rev_recursion.c)

## Task 2: Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

Write a function that returns the length of a string.

- **Prototype:** `int _strlen_recursion(char *s);`
- **Description:**
  - FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.
- **File:** [2-strlen_recursion.c](2-strlen_recursion.c)

## Task 3: You mustn't be afraid to dream a little bigger, darling

Write a function that returns the factorial of a given number.

- **Prototype:** `int factorial(int n);`
- **Description:**
  - If `n` is lower than `0`, the function should return `-1` to indicate an error.
  - Factorial of `0` is `1`.
- **File:** [3-factorial.c](3-factorial.c)

## Task 4: Once an idea has taken hold of the brain it's almost impossible to eradicate

Write a function that returns the value of `x` raised to the power of `y`.

- **Prototype:** `int _pow_recursion(int x, int y);`
- **Description:**
  - If `y` is lower than `0`, the function should return `-1`.
  - FYI: The standard library provides a different function: `pow`. Run `man pow` to learn more.
- **File:** [4-pow_recursion.c](4-pow_recursion.c)

## Task 5: Your subconscious is looking for the dreamer

Write a function that returns the natural square root of a number.

- **Prototype:** `int _sqrt_recursion(int n);`
- **Description:**
  - If `n` does not have a natural square root, the function should return `-1`.
  - FYI: The standard library provides a different function: `sqrt`. Run `man sqrt` to learn more.
- **File:** [5-sqrt_recursion.c](5-sqrt_recursion.c)

## Task 6: Inception. Is it possible?

Write a function that returns `1` if the input integer is a prime number, otherwise return `0`.

- **Prototype:** `int is_prime_number(int n);`
- **File:** [6-is_prime_number.c](6-is_prime_number.c)
