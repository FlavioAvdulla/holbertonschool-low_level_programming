# Memory Allocation Tasks in C

This repository contains several C functions that perform various memory allocation operations. Below are the details of each task and the corresponding files.

## Table of Contents

- Task 0: Trust no one
- Task 1: string_nconcat
- Task 2: _calloc
- Task 3: array_range

## Task 0: Trust no one

Write a function that allocates memory using `malloc`.

- **Prototype:** `void *malloc_checked(unsigned int b);`
- **Description:**
  - Returns a pointer to the allocated memory.
  - If `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of `98`.
- **File:** [0-malloc_checked.c](0-malloc_checked.c)

## Task 1: string_nconcat

Write a function that concatenates two strings.

- **Prototype:** `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- **Description:**
  - The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated.
  - If the function fails, it should return `NULL`.
  - If `n` is greater or equal to the length of `s2` then use the entire string `s2`.
  - If `NULL` is passed, treat it as an empty string.
- **File:** [1-string_nconcat.c](1-string_nconcat.c)

## Task 2: _calloc

Write a function that allocates memory for an array, using `malloc`.

- **Prototype:** `void *_calloc(unsigned int nmemb, unsigned int size);`
- **Description:**
  - The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
  - The memory is set to zero.
  - If `nmemb` or `size` is `0`, then `_calloc` returns `NULL`.
  - If `malloc` fails, then `_calloc` returns `NULL`.
  - FYI: The standard library provides a different function: `calloc`. Run `man calloc` to learn more.
- **File:** [2-calloc.c](2-calloc.c)

## Task 3: array_range

Write a function that creates an array of integers.

- **Prototype:** `int *array_range(int min, int max);`
- **Description:**
  - The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`.
  - Returns the pointer to the newly created array.
  - If `min` > `max`, return `NULL`.
  - If `malloc` fails, return `NULL`.
- **File:** [3-array_range.c](3-array_range.c)
