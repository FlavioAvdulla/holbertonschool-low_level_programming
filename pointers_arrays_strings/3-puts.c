Write a function that compares two strings.

    Prototype: int _strcmp(char *s1, char *s2);
    Your function should work exactly like strcmp

FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.

julien@ubuntu:~/$ cat 3-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp
julien@ubuntu:~/$ ./3-strcmp 
-15
15
0
julien@ubuntu:~/$ 

Repo:

    GitHub repository: holbertonschool-low_level_programming
    Directory: pointers_arrays_strings
    File: 3-strcmp.c