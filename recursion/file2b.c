#include <stdio.h>

int main()
{
    int var = 10;
    int *p;
    p = &var;

    printf("the value of var is %d\n", var);
    printf("the address of var is %p\n", (void*)&var);
    printf("the value stored at pinter p is %d\n", *p);
    printf("the address stored at the pointer p %p\n", (void*)p);

    return (0);
}
    
