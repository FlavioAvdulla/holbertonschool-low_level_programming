#include <stdio.h>
#include <string.h>

int main()
{
    char chararray[5] = {'H', 'e', 'l', 'l','o'};

    for (int i = 0; i < 5; i++)
    {
        putchar(chararray[i]);
    }
    putchar('\n');

    return (0);
}
