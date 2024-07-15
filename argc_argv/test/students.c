#include "student.h"
#include <stdio.h>
#include <string.h>

void initialize_student(Student *student, const char *name, int age, float grade)
{
    strncpy(student->name, name, MAX_NAME_LENGTH - 1);
    student->name[MAX_NAME_LENGTH - 1] = '\0';  // Ensure null termination
    student->age = age;
    student->average_grade = grade;
}

void print_student(const Student *student)
{
    printf("Student:\nName: %s, Age: %d, Grade: %.2f\n", student->name, student->age, student->average_grade);
}

float average_grade(const Student *students, int array_size)
{
    float sum = 0.0;
    for (int i = 0; i < array_size; i++)
    {
        sum += students[i].average_grade;
    }
    return sum / array_size;
}

float max_grade(const Student *students, int array_size)
{
    float max = students[0].average_grade;
    for (int i = 1; i < array_size; i++)
    {
        if (students[i].average_grade > max)
        {
            max = students[i].average_grade;
        }
    }
    return max;
}