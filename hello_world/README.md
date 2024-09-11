# C Programming Tasks

This repository contains various tasks related to C programming, including preprocessing, compiling, assembling, and writing C programs.

## Table of Contents

1. Preprocessor
2. Compiler
3. Assembler
4. Name
5. Hello, puts
6. Hello, printf
7. Size is not grandeur, and territory does not make a nation
8. What happens when you type gcc main.c
9. Intel
10. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity

## Tasks

### 0. Preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.

- **The C file name will be saved in the variable `$CFILE`**
- **The output should be saved in the file `c`**
- **File**: [Click Here](0-preprocessor)

### 1. Compiler
Write a script that compiles a C file but does not link.

- **The C file name will be saved in the variable `$CFILE`**
- **The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.**
  - Example: if the C file is `main.c`, the output file should be `main.o`
- **File**: [Click Here](1-compiler)

### 2. Assembler
Write a script that generates the assembly code of a C code and save it in an output file.

- **The C file name will be saved in the variable `$CFILE`**
- **The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.**
  - Example: if the C file is `main.c`, the output file should be `main.s`
- **File**: [Click Here](2-assembler)

### 3. Name
Write a script that compiles a C file and creates an executable named `cisfun`.

- **The C file name will be saved in the variable `$CFILE`**
- **File**: [Click Here](3-name)

### 4. Hello, puts
Write a C program that prints exactly "Programming is like building a multilingual puzzle", followed by a new line.

- **Use the function `puts`**
- **You are not allowed to use `printf`**
- **Your program should end with the value `0`**
- **File**: [Click Here](4-puts.c)

### 5. Hello, printf
Write a C program that prints exactly "with proper grammar, but the outcome is a piece of art,", followed by a new line.

- **Use the function `printf`**
- **You are not allowed to use the function `puts`**
- **Your program should return `0`**
- **Your program should compile without warning when using the `-Wall` gcc option**
- **File**: [Click Here](5-printf.c)

### 6. Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on.

- **You should produce the exact same output as in the example**
- **Warnings are allowed**
- **Your program should return `0`**
- **If you are using a Linux on Vagrant you might have to install the package `libc6-dev-i386` to test the `-m32` gcc option (normally you don't need to do anything on your sandbox).**
- **File**: [Click Here](6-size.c)

### 7. What happens when you type gcc main.c
Write a blog post that explains all the steps of compilation. Use command lines and examples to illustrate.

- **Use `gcc` as the compiler**
- **Have at least one picture, at the top of the blog post**
- **Publish your blog post on Medium or LinkedIn**
- **Share your blog post at least on LinkedIn**
- **Please, remember that these blogs must be written in English to further your technical ability in a variety of settings**

When done, please add all URLs below (blog post, LinkedIn post, etc.)

### 8. Intel
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

- **The C file name will be saved in the variable `$CFILE`.**
- **The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.**
  - Example: if the C file is `main.c`, the output file should be `main.s`
- **File**: [Click Here](100-intel)

### 9. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
Write a C program that prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

- **You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`**
- **Your program should return `1`**
- **Your program should compile without any warnings when using the `-Wall` gcc option**
- **File**: [Click Here](101-quote.c)

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

4. **Implement the scripts and programs** as specified in each task.

## Contributing

Feel free to fork this repository and submit pull requests. For major changes, please open an issue first to discuss what you would like to change.

## License

This project is licensed under the MIT License - see the LICENSE file for details.
