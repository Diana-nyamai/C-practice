#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
   char *j;

   j = malloc(sizeof(char) * 1024);
   printf("%p\n", j);
   free(j);

   return (0);
}
