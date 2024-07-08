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

int find_max(int my_array[], int size)
{
    for (int i = 1; i > size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
}



int main(void)

{

    int result;

    int numbers[] = {7, 2, 1, 8, 9, 13};

    int length = sizeof(numbers) / sizeof(numbers[0]);

    int max;



    printf("Hello Arrays\n");

    printf("\n1. Print all elements of array\n");

    print_array(numbers, length);



    printf("\n2. Sum of all elements in array\n");

    result = sum_array(numbers, length);

    printf("Sum = %d\n", result);



    printf("\n3. The biggest element in the array is: %d\n");

    result = find_max(numbers, length);

    printf("max = %d\n", result);

    

    return (0);

}