#include "student.h"

#include <stdio.h>

#include <string.h>



void initialize_student(Student *student, char *name, int age, float grade)

{

    strcpy(student->name, name);

	student->age  = age;

	student->average_grade = grade;

}



void print_student(Student *student)

{

    printf("Student:\nName: %s, Age: %d, Average grade: %.2f\n",

                student->name, student->age, student->average_grade);

}



float average_grade(Student *students, int array_size)

{

    float sum = 0.0, avg = 0.0;



    for (int i=0; i<array_size; i++)

        sum = sum + students[i].average_grade;



    avg = sum / array_size;



    return (avg);



}



float max_grade(Student *students, int array_size)

{

    int i;

 

    float max = students[0].average_grade;

 

    for (i = 1; i < array_size; i++)

        if (students[i].average_grade > max)

            max = students[i].average_grade;

 

    return (float) max;

}



float min_grade(Student *students, int array_size)

{

    int i;

 

    float min = students[0].average_grade;

 

    for (i = 1; i < array_size; i++)

        if (students[i].average_grade < min)

            min = students[i].average_grade;

 

    return (float) min;

}



int search_grade(Student *students, int array_size, float target_grade)

{

    int pos;

    for (pos = 0; pos < array_size; pos++)

        if (students[pos].average_grade == target_grade)

            return pos;



    // If the key is not found

    return -1;

}