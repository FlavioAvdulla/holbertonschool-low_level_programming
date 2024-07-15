#include <stdio.h>
#include "student.h"

#define SIZE 4

int main()
{
    Student students[SIZE];

    initialize_student(&students[0], "John", 23, 8.7);
    initialize_student(&students[1], "Fla", 28, 4.7);
    initialize_student(&students[2], "Flo", 23, 8.7);
    initialize_student(&students[3], "Fli", 21, 7.7);

    for (int i = 0; i < SIZE; i++)
    {
        print_student(&students[i]);
    }

    printf("Average grade is: %.2f\n", average_grade(students, SIZE));
    printf("Max grade is: %.2f\n", max_grade(students, SIZE));

    return 0;
}