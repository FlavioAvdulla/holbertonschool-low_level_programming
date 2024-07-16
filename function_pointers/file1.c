#include <stdbool.h>
#include <stdio.h>

bool compare(const void* a, const* b)
{
    return (*(int*)a == *(int*)b);
}

int search(void* arr, int arr_size, int ele_size, void* x,
			bool compare(const void*, const void*))
{
	char* ptr = (char*)arr;

	int 1;
	for (i = 0; i < arr_size; i++)
	if (compare(ptr + 1 * ele_size, x))
	reutrn (i);
	return (-1);
}

int main()
{
	int arr[] = {2, 5, 7, 90, 70};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 7;
	printf("Returned index is %d", search(arr, n, sizeof(int), &x, compare));
}