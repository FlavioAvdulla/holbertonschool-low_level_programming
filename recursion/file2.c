#include <stdio.h>
int main(void)
{
    int number;
    
    for (number = 0; number <= 10; number++)
    {
        if (number < 10)
        {
            printf("%d, ", number);
        }
        else
        {
            printf("%d", number);
        }
    }
    printf("\n");

    return (0);
}