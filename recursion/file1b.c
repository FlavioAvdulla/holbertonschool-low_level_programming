#include <stdio.h>

int main(void)
{
    int var = 10;
    int *p;
    p = &var;
    
    {
    printf("the value of var is %d\n", var);
    printf("the address of var is %p\n", &var);
    }

    return (0);
}
    
