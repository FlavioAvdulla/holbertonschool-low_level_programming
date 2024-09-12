# C Function Tasks

This repository contains several C functions and a program that perform various operations. Below are the details of each task and the corresponding files.

## Task 0: What's my name

Write a function that prints a name.

- **Prototype:** `void print_name(char *name, void (*f)(char *));`
- **File:** [Click Here](0-print_name.c)

## Task 1: If you spend too much time thinking about a thing, you'll never get it done

Write a function that executes a function given as a parameter on each element of an array.

- **Prototype:** `void array_iterator(int *array, size_t size, void (*action)(int));`
- **File:** [Click Here](1-array_iterator.c)

## Task 2: To hell with circumstances; I create opportunities

Write a function that searches for an integer.

- **Prototype:** `int int_index(int *array, int size, int (*cmp)(int));`
- **File:** [Click Here](2-int_index.c)

## Task 3: A goal is not always meant to be reached, it often serves simply as something to aim at

Write a program that performs simple operations.

- **Usage:** `calc num1 operator num2`
- **Operators:**
  - `+`: addition
  - `-`: subtraction
  - `*`: multiplication
  - `/`: division
  - `%`: modulo
- **Files:**
  - `3-calc.h`: Contains all the function prototypes and data structures used by the program.
  - `3-op_functions.c`: Contains the following functions:
    - `int op_add(int a, int b);`
    - `int op_sub(int a, int b);`
    - `int op_mul(int a, int b);`
    - `int op_div(int a, int b);`
    - `int op_mod(int a, int b);`
  - `3-get_op_func.c`: Contains the function that selects the correct function to perform the operation asked by the user.
    - **Prototype:** `int (*get_op_func(char *s))(int, int);`
  - `3-main.c`: Contains the main function only.
    - You are not allowed to code any other function than `main` in this file.
    - You are not allowed to directly call `op_add`, `op_sub`, `op_mul`, `op_div`, or `op_mod` from the main function.
    - You have to use `atoi` to convert arguments to `int`.
    - You are not allowed to use any kind of loop.
    - You are allowed to use a maximum of 3 `if` statements.

### Error Handling

- If the number of arguments is wrong, the program prints `Error`, followed by a new line, and exits with the status `98`.
- If the operator is none of the above, the program prints `Error`, followed by a new line, and exits with the status `99`.
- If the user tries to divide (`/` or `%`) by `0`, the program prints `Error`, followed by a new line, and exits with the status `100`.

## Usage

To compile and run the program, use the following commands:

```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o calc
./calc num1 operator num2
