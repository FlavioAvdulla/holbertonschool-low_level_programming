# Doubly Linked List Operations in C

This repository contains several C functions that perform various operations on a doubly linked list (`dlistint_t`). Below are the details of each task and the corresponding files.

## Table of Contents

- Task 0: Print list
- Task 1: List length
- Task 2: Add node
- Task 3: Add node at the end
- Task 4: Free list
- Task 5: Get node at index
- Task 6: Sum list
- Task 7: Insert at index
- Task 8: Delete at index

## Task 0: Print list

Write a function that prints all the elements of a `dlistint_t` list.

- **Prototype:** `size_t print_dlistint(const dlistint_t *h);`
- **Return:** the number of nodes
- **File:** [0-print_dlistint.c](0-print_dlistint.c)

## Task 1: List length

Write a function that returns the number of elements in a linked `dlistint_t` list.

- **Prototype:** `size_t dlistint_len(const dlistint_t *h);`
- **File:** [1-dlistint_len.c](1-dlistint_len.c)

## Task 2: Add node

Write a function that adds a new node at the beginning of a `dlistint_t` list.

- **Prototype:** `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- **Return:** the address of the new element, or `NULL` if it failed
- **File:** [2-add_dnodeint.c](2-add_dnodeint.c)

## Task 3: Add node at the end

Write a function that adds a new node at the end of a `dlistint_t` list.

- **Prototype:** `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- **Return:** the address of the new element, or `NULL` if it failed
- **File:** [3-add_dnodeint_end.c](3-add_dnodeint_end.c)

## Task 4: Free list

Write a function that frees a `dlistint_t` list.

- **Prototype:** `void free_dlistint(dlistint_t *head);`
- **File:** [4-free_dlistint.c](4-free_dlistint.c)

## Task 5: Get node at index

Write a function that returns the nth node of a `dlistint_t` linked list.

- **Prototype:** `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- **Description:** 
  - `index` is the index of the node, starting from `0`
  - If the node does not exist, return `NULL`
- **File:** [5-get_dnodeint.c](5-get_dnodeint.c)

## Task 6: Sum list

Write a function that returns the sum of all the data (`n`) of a `dlistint_t` linked list.

- **Prototype:** `int sum_dlistint(dlistint_t *head);`
- **Description:** 
  - If the list is empty, return `0`
- **File:** [6-sum_dlistint.c](6-sum_dlistint.c)

## Task 7: Insert at index

Write a function that inserts a new node at a given position.

- **Prototype:** `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
- **Description:** 
  - `idx` is the index of the list where the new node should be added. Index starts at `0`
  - Returns the address of the new node, or `NULL` if it failed
  - If it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`
- **Files:** [7-insert_dnodeint.c](7-insert_dnodeint.c), [2-add_dnodeint.c](2-add_dnodeint.c), [3-add_dnodeint_end.c](3-add_dnodeint_end.c)

## Task 8: Delete at index

Write a function that deletes the node at index `index` of a `dlistint_t` linked list.

- **Prototype:** `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- **Description:** 
  - `index` is the index of the node that should be deleted. Index starts at `0`
  - Returns `1` if it succeeded, `-1` if it failed
- **File:** [8-delete_dnodeint.c](8-delete_dnodeint.c)
