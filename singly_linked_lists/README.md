# Linked List Tasks in C

This repository contains several C functions that perform various operations on linked lists. Below are the details of each task and the corresponding files.

## Table of Contents

- Task 0: Print list
- Task 1: List length
- Task 2: Add node
- Task 3: Add node at the end
- Task 4: Free list

## Task 0: Print list

Write a function that prints all the elements of a `list_t` list.

- **Prototype:** `size_t print_list(const list_t *h);`
- **Description:**
  - Return: the number of nodes.
  - Format: see example.
  - If `str` is `NULL`, print `[0] (nil)`.
  - You are allowed to use `printf`.
- **File:** [0-print_list.c](0-print_list.c)

## Task 1: List length

Write a function that returns the number of elements in a linked `list_t` list.

- **Prototype:** `size_t list_len(const list_t *h);`
- **File:** [1-list_len.c](1-list_len.c)

## Task 2: Add node

Write a function that adds a new node at the beginning of a `list_t` list.

- **Prototype:** `list_t *add_node(list_t **head, const char *str);`
- **Description:**
  - Return: the address of the new element, or `NULL` if it failed.
  - `str` needs to be duplicated.
  - You are allowed to use `strdup`.
- **File:** [2-add_node.c](2-add_node.c)

## Task 3: Add node at the end

Write a function that adds a new node at the end of a `list_t` list.

- **Prototype:** `list_t *add_node_end(list_t **head, const char *str);`
- **Description:**
  - Return: the address of the new element, or `NULL` if it failed.
  - `str` needs to be duplicated.
  - You are allowed to use `strdup`.
- **File:** [3-add_node_end.c](3-add_node_end.c)

## Task 4: Free list

Write a function that frees a `list_t` list.

- **Prototype:** `void free_list(list_t *head);`
- **File:** [4-free_list.c](4-free_list.c)
