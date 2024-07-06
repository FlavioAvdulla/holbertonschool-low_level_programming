#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello World!";
    char str2[20] = "Hello World!";
    char str3[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char *str4 = "Hello World!";


    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    printf("str4: %s\n", str4);

    return (0);
}
