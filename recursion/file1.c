#include <stdio.h>



void print_array(int my_array[], int size)

{

    for (int i = 0; i < size; i++)

        printf("%d ", my_array[i]);

    printf("\n");

}



int sum_array(int my_array[], int size)

{

    int sum = 0;

    for (int i = 0; i < size; i++)

        sum = sum + my_array[i];

    return (sum);

}

int find_min(int my_array[], int size)
{
    return (0);
}


int main(void)

{

    int result;

    int numbers[] = {7, 2, 1, 8, 9, 13};

    int length = sizeof(numbers) / sizeof(numbers[0]);



    printf("Hello Arrays\n");

    printf("\n1. Print all elements of array\n");

    print_array(numbers, length);



    printf("\n2. Sum of all elements in array\n");

    result = sum_array(numbers, length);

    printf("Sum = %d\n", result);

    
    
    printf("\n4. print the min in all array\n");

    result = find_min(numbers, length);

    printf("minimum = %d\n", min);

    

    return (0);

}