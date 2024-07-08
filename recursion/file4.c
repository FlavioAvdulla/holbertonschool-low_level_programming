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



float avg_array(int my_array[], int size)

{

    float avg; 

    avg = (float) (sum_array(my_array, size)) / size; 

    return (avg);

}



int find_min(int my_array[], int size)

{

    int min_value = my_array[0];

    for (int i = 0; i < size; i++) 

    {

        if (my_array[i] < min_value)

            min_value = my_array[i];

    }

    return (min_value);

}



int main(void)

{

    int min, result;

    float avg;

    int numbers[] = {7, -2, 1, 4, 2, 8, 1, 15, -7};

    int length = sizeof(numbers) / sizeof(numbers[0]);



    printf("Hello Arrays\n");

    printf("\n1. Print all elements of array\n");

    print_array(numbers, length);



    printf("\n2. Sum of all elements in array\n");

    result = sum_array(numbers, length);

    printf("Sum = %d\n", result);



    printf("\n3. Average of all elements in array\n");

    avg = avg_array(numbers, length);

    printf("Average = %.2f\n", avg);



    printf("\n4. Minimum element of array\n");

    min = find_min(numbers, length);

    printf("Minimum value = %d\n", min);

    

    return (0);

}