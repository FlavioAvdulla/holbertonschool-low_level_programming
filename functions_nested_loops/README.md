# C Programming Tasks

This repository contains various tasks related to C programming, including writing functions and programs to perform specific operations.

## Table of Contents

1. _putchar
2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
3. 10 x alphabet
4. islower
5. isalpha
6. Sign
7. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
8. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
9. I'm federal agent Jack Bauer, and today is the longest day of my life
10. Learn your times table
11. a + b
12. 98 Battery Street, the OG

## Tasks

### 0. _putchar
Write a program that prints `_putchar`, followed by a new line.

- **The program should return `0`**
- **File**: [0-putchar.c](0-putchar.c)

### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a function that prints the alphabet, in lowercase, followed by a new line.

- **Prototype**: `void print_alphabet(void);`
- **You can only use `_putchar` twice in your code**
- **File**: [1-alphabet.c](1-alphabet.c)

### 2. 10 x alphabet
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

- **Prototype**: `void print_alphabet_x10(void);`
- **You can only use `_putchar` twice in your code**
- **File**: [2-print_alphabet_x10.c](2-print_alphabet_x10.c)

### 3. islower
Write a function that checks for lowercase character.

- **Prototype**: `int _islower(int c);`
- **Returns `1` if `c` is lowercase**
- **Returns `0` otherwise**
- **FYI**: The standard library provides a similar function: `islower`. Run `man islower` to learn more.
- **File**: [3-islower.c](3-islower.c)

### 4. isalpha
Write a function that checks for alphabetic character.

- **Prototype**: `int _isalpha(int c);`
- **Returns `1` if `c` is a letter, lowercase or uppercase**
- **Returns `0` otherwise**
- **FYI**: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.
- **File**: [4-isalpha.c](4-isalpha.c)

### 5. Sign
Write a function that prints the sign of a number.

- **Prototype**: `int print_sign(int n);`
- **Returns `1` and prints `+` if `n` is greater than zero**
- **Returns `0` and prints `0` if `n` is zero**
- **Returns `-1` and prints `-` if `n` is less than zero**
- **File**: [5-sign.c](5-sign.c)

### 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
Write a function that computes the absolute value of an integer.

- **Prototype**: `int _abs(int);`
- **FYI**: The standard library provides a similar function: `abs`. Run `man abs` to learn more.
- **File**: [6-abs.c](6-abs.c)

### 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
Write a function that prints the last digit of a number.

- **Prototype**: `int print_last_digit(int);`
- **Returns the value of the last digit**
- **File**: [7-print_last_digit.c](7-print_last_digit.c)

### 8. I'm federal agent Jack Bauer, and today is the longest day of my life
Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

- **Prototype**: `void jack_bauer(void);`
- **You can listen to this soundtrack while coding :)**
- **File**: [8-24_hours.c](8-24_hours.c)

### 9. Learn your times table
Write a function that prints the 9 times table, starting with 0.

- **Prototype**: `void times_table(void);`
- **Format**: see example
- **File**: [9-times_table.c](9-times_table.c)

### 10. a + b
Write a function that adds two integers and returns the result.

- **Prototype**: `int add(int, int);`
- **File**: [10-add.c](10-add.c)

### 11. 98 Battery Street, the OG
Write a function that prints all natural numbers from `n` to `98`, followed by a new line.

- **Prototype**: `void print_to_98(int n);`
- **Numbers must be separated by a comma, followed by a space**
- **Numbers should be printed in order**
- **The first printed number should be the number passed to your function**
- **The last printed number should be `98`**
- **You are allowed to use the standard library**
- **File**: [11-print_to_98.c](11-print_to_98.c)

## How to Use

1. **Clone the repository**:
    ```bash
    git clone <repository-url>
    ```

2. **Navigate to the task directory**:
    ```bash
    cd <task-directory>
    ```

3. **Open the file in your preferred code editor**.

4. **Implement the functions and programs** as specified in each task.

## Contributing

Feel free to fork this repository and submit pull requests. For major changes, please open an issue first to discuss what you would like to change.

## License

This project is licensed under the MIT License - see the LICENSE file for details.
