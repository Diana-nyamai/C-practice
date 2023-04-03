#include <stdio.h>

struct school
{
    int students;
    int teachers;
} school;

int main(void)
{
    school.students = 100;
    school.teachers = 10;

    printf("There are %d students and %d teachers\n", school.students, school.teachers);

    return (0);
}