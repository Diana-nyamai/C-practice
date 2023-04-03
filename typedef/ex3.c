#include <stdio.h>

struct school
{
   int students;
   int teachers;
} school;

int main(void)
{
    school = (struct school) {.students = 100, .teachers = 10};
    printf("%d %d", school.students, school.teachers);
}