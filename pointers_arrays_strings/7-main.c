#include "main.h"
#include <stdio.h>

int main(void)
{
    char s1[] = "Talk is cheap. Show me the code.\n";
    char s2[] = "TALK IS CHEAP. SHOW ME THE CODE.\n";
    char *p1;
    char *p2;

    p1 = leet(s1);
    p2 = leet(s2);

    printf("%s", p1);
    printf("%s", p2);
    
    return (0);
}