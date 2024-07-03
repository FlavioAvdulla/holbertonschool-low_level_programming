#include <stdio.h>
int main(void)
{
    int num;

    for(num = 0; num <= 20; num += 2)
    if (num < 20)
        {
            printf("%d, ", num);
        }
    else
        {
            printf("%d", num);
        }
        
    printf("\n");
    return (0);
}