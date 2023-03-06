#include <stdio.h>

void modify_char(char *c, char *cc)
{
    *c = 'l';
    *cc = 'm';
}
int main()
{
    /* code */
    char c;
    char cc;
    char *p;
    char *p2;

    c = 'H';
    cc = 'h';
    p = &c;
    p2 = &cc;
    
    printf("before change: %c %c\n", c, cc);
    modify_char(p, p2);
    printf("after change:  %c %c", c, cc);
    return 0;
}
