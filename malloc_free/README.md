# Memory Allocation Tasks in C

This repository contains several C functions that perform various memory allocation operations. Below are the details of each task and the corresponding files.

## Table of Contents

- Task 0: Float like a butterfly, sting like a bee
- Task 1: The woman who has no imagination has no wings
- Task 2: He who is not courageous enough to take risks will accomplish nothing in life
- Task 3: If you even dream of beating me you'd better wake up and apologize
- Task 4: It's not bragging if you can back it up

## Task 0: Float like a butterfly, sting like a bee

Write a function that creates an array of chars, and initializes it with a specific char.

- **Prototype:** `char *create_array(unsigned int size, char c);`
- **Description:**
  - Returns `NULL` if `size` is `0`.
  - Returns a pointer to the array, or `NULL` if it fails.
- **File:** [0-create_array.c](0-create_array.c)

## Task 1: The woman who has no imagination has no wings

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

- **Prototype:** `char *_strdup(char *str);`
- **Description:**
  - The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
  - Returns `NULL` if `str` is `NULL`.
  - On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available.
  - FYI: The standard library provides a similar function: `strdup`. Run `man strdup` to learn more.
- **File:** [1-strdup.c](1-strdup.c)

## Task 2: He who is not courageous enough to take risks will accomplish nothing in life

Write a function that concatenates two strings.

- **Prototype:** `char *str_concat(char *s1, char *s2);`
- **Description:**
  - The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated.
  - If `NULL` is passed, treat it as an empty string.
  - The function should return `NULL` on failure.
- **File:** [2-str_concat.c](2-str_concat.c)

## Task 3: If you even dream of beating me you'd better wake up and apologize

Write a function that returns a pointer to a 2 dimensional array of integers.

- **Prototype:** `int **alloc_grid(int width, int height);`
- **Description:**
  - Each element of the grid should be initialized to `0`.
  - The function should return `NULL` on failure.
  - If `width` or `height` is `0` or negative, return `NULL`.
- **File:** [3-alloc_grid.c](3-alloc_grid.c)

## Task 4: It's not bragging if you can back it up

Write a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.

- **Prototype:** `void free_grid(int **grid, int height);`
- **Description:**
  - Frees the memory allocated for the grid.
  - Note that we will compile with your `alloc_grid.c` file. Make sure it compiles.
- **File:** [4-free_grid.c](4-free_grid.c)
