#include "student.h"

#include <stdio.h>



#define SIZE 4



int main(void)

{

    Student students[SIZE];

    initialize_student(&students[0], "John", 23, 8.5);

    initialize_student(&students[1], "James", 19, 4.2);

    initialize_student(&students[2], "Anne", 35, 9.6);

    initialize_student(&students[3], "Alice", 19, 7.3);



    for (int i=0; i<SIZE; i++)

        print_student(&students[i]);



    printf("Average grade is: %.2f\n", average_grade(students, SIZE));

    printf("Max grade is: %.2f\n", max_grade(students, SIZE));

    printf("Min grade is: %.2f\n", min_grade(students, SIZE));



    int position = search_grade(students, SIZE, 9.6);

    if (position == -1)

        printf("Element is not found in the array\n");

    else

        printf("Element found at position %d\n", position);



    return (0);

}