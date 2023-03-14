#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv)
{
   int n;
   char *arr;

   n = 5;
   arr = malloc(sizeof(char) * n);

   arr[0] = 'c';
   arr[1] = 'o';
   arr[2] = 'o';
   arr[3] = 'l';

   printf("%s\n ", arr);
   
   return (0);
}

