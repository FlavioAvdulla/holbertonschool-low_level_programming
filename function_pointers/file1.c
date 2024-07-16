#include <stdbool.h>
#include <stdio.h>

bool compare(const void* a, const* b)
{
    return (*(int*)a == *(int*)b);
}

int search(void* arr, int arr_size, int ele_size, void* x, bool compare(const void*, const void*))