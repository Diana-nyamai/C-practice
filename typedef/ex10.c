#include <stdio.h>

struct mystruct
{
    int data;
    struct mystruct *link;
};
int main(void)
{
    struct mystruct struc;
    struct mystruct struc2;

    struc.data = 20;
    struc.link = NULL;

    struc2.data = 30;
    struc2.link = NULL;

    struc.link = &struc2;

    printf("%d", struc.link->data);

    return (0);
}