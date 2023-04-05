#include <stdio.h>

void fun1(){ printf("hello there\n");}
void fun2(){ printf("hello there dee\n");}

void wrapper(void (*func)())
{
    func();
}
int main(int argc, char const *argv[])
{
    wrapper(fun1);
    wrapper(fun2);
    return 0;
}
