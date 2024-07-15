#ifndef STUDENT_H
#define STUDENT_H

#define MAX_NAME_LENGTH 50

typedef struct Student
{
    char name[MAX_NAME_LENGTH];
    int age;
    float average_grade;
} Student;

void initialize_student(Student *student, const char *name, int age, float grade);
void print_student(const Student *student);
float average_grade(const Student *students, int array_size);
float max_grade(const Student *students, int array_size);

#endif