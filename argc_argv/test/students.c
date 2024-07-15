#include "student.h"
#include <stdio.h>
#include <string.h>

void initialize_student(Student *student, char *name, int age, float grade)
{
    if (student)
    {
        student->name = name;
        student->age = age;
        student->average_grade = grade;
    }
}

void print_student(Student *student)
{
    printf("student: \nName: %s, Age: %d, grade: %.2f\n",
        student->name, student->age, student->average_grade);
}