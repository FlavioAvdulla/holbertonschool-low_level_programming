# C Programming Tasks

This repository contains several C programs that perform various tasks. Each task is described below along with the corresponding file name.

## Table of Contents

- 0. It ain't what they call you, it's what you answer to
- 1. Silence is argument carried out by other means
- 2. The best argument against democracy is a five-minute conversation with the average voter
- 3. Neither irony nor sarcasm is argument
- 4. To infinity and beyond

## Tasks

### 0. It ain't what they call you, it's what you answer to
Write a program that prints its name, followed by a new line.

- If you rename the program, it will print the new name, without having to compile it again.
- You should not remove the path before the name of the program.

**File:** [0-whatsmyname.c](0-whatsmyname.c)

### 1. Silence is argument carried out by other means
Write a program that prints the number of arguments passed into it.

- Your program should print a number, followed by a new line.

**File:** [1-args.c](1-args.c)

### 2. The best argument against democracy is a five-minute conversation with the average voter
Write a program that prints all arguments it receives.

- All arguments should be printed, including the first one.
- Only print one argument per line, ending with a new line.

**File:** [2-args.c](2-args.c)

### 3. Neither irony nor sarcasm is argument
Write a program that multiplies two numbers.

- Your program should print the result of the multiplication, followed by a new line.
- You can assume that the two numbers and result of the multiplication can be stored in an integer.
- If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1`.

**File:** [3-mul.c](3-mul.c)

### 4. To infinity and beyond
Write a program that adds positive numbers.

- Print the result, followed by a new line.
- If no number is passed to the program, print `0`, followed by a new line.
- If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`.
- You can assume that numbers and the addition of all the numbers can be stored in an `int`.

**File:** [4-add.c](4-add.c)

## Compilation and Execution

To compile and execute any of these programs, use the following commands:

```sh
gcc -o output_file source_file.c
./output_file
