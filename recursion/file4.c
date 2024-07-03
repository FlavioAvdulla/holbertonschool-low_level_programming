#include <stdio.h>
int main(void)
{
    int num1 = 7;
    int num2 = 10;
    int result;

    result = add(num1, num2);

    printf("The sum of %d and %d is %d", num1, num2, result);

    return (0);
}

int add(int a, int b)
{
    return a + b;
}