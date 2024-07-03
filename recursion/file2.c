#include <stdio.h>
int main(void)
{
    int num;

    for (num = 0; num <= 10; num++)
    {
        if (num < 10)
        {
            printf("%d, ", num);
        }
        else
        {
            printf("%d", num);
        }
    }
    return (0);
}