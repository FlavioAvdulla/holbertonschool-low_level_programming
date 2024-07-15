#ifndef STUDENT_H

#define STUDENT_H



#define MAX_NAME_LENGTH 50



typedef struct Student

{

	char  name[MAX_NAME_LENGTH];

	int   age;

	float average_grade;

} Student;



void initialize_student(Student *student, char *name, int age, float grade);

void print_student(Student *student);

float average_grade(Student *students, int array_size);

float max_grade(Student *students, int array_size);

float min_grade(Student *students, int array_size);

int   search_grade(Student *students, int array_size, float target_grade);

int   count_passing_grades(Student *students, int array_size);







#endif