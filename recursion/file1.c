#include <stdio.h>

int main()
{
	int array[5] = {1, 2, 3, 4, 5};

	printf("Elements of the array are:\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ",array[i], i);
	}
	return (0);
}