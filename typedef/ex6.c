#include <stdio.h>

typedef struct school
{
    int teachers;
    int students;
}s;

int main(void)
{
    s school1 = {10, 100};
    printf("teachers: %d\nstudents: %d\n", school1.teachers, school1.students);

    return (0);
}