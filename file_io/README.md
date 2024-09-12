# File Operations in C

This repository contains several C functions and a program that perform various file operations. Below are the details of each task and the corresponding files.

## Table of Contents

- Task 0: Tread lightly, she is near
- Task 1: Under the snow
- Task 2: Speak gently, she can hear
- Task 3: cp

## Task 0: Tread lightly, she is near

Write a function that reads a text file and prints it to the POSIX standard output.

- **Prototype:** `ssize_t read_textfile(const char *filename, size_t letters);`
- **Description:**
  - Reads and prints up to `letters` characters from the file specified by `filename`.
  - Returns the actual number of characters read and printed.
  - Returns `0` if the file cannot be opened or read, if `filename` is `NULL`, or if `write` fails.
- **File:** [0-read_textfile.c](0-read_textfile.c)

## Task 1: Under the snow

Create a function that creates a file.

- **Prototype:** `int create_file(const char *filename, char *text_content);`
- **Description:**
  - Creates a file named `filename` and writes `text_content` to it.
  - Returns `1` on success, `-1` on failure.
  - The created file has permissions `rw-------`.
  - If the file already exists, it is truncated.
  - Returns `-1` if `filename` is `NULL`.
  - If `text_content` is `NULL`, creates an empty file.
- **File:** [1-create_file.c](1-create_file.c)

## Task 2: Speak gently, she can hear

Write a function that appends text at the end of a file.

- **Prototype:** `int append_text_to_file(const char *filename, char *text_content);`
- **Description:**
  - Appends `text_content` to the end of the file specified by `filename`.
  - Returns `1` on success, `-1` on failure.
  - Does not create the file if it does not exist.
  - Returns `-1` if `filename` is `NULL`.
  - If `text_content` is `NULL`, does not add anything to the file.
- **File:** [2-append_text_to_file.c](2-append_text_to_file.c)

## Task 3: cp

Write a program that copies the content of a file to another file.

- **Usage:** `cp file_from file_to`
- **Description:**
  - Copies the content of `file_from` to `file_to`.
  - If the number of arguments is incorrect, exits with code `97` and prints `Usage: cp file_from file_to`.
  - If `file_to` already exists, it is truncated.
  - If `file_from` does not exist or cannot be read, exits with code `98` and prints `Error: Can't read from file NAME_OF_THE_FILE`.
  - If `file_to` cannot be created or written to, exits with code `99` and prints `Error: Can't write to NAME_OF_THE_FILE`.
  - If a file descriptor cannot be closed, exits with code `100` and prints `Error: Can't close fd FD_VALUE`.
  - The created file has permissions `rw-rw-r--`.
  - Reads `1,024` bytes at a time from `file_from` to minimize system calls.
  - Uses `dprintf` for printing error messages.
- **File:** [3-cp.c](3-cp.c)
