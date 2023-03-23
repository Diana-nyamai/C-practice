#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void print_all(const char * const format, ...)
{
   va_list arg;
   int i = 0, j, c = 0;
   char *str;
   const char *plh = "cifs";

   va_start(arg, format);
   while(format && format[i])
   {
        j = 0;
        while (plh[j])
        {
            if (format[i] == plh[j] && c)
            {
                printf(", ");
                break;
            }
            j++;
        }

        switch (format[i])
        {
        case 'c':
            printf("%c", va_arg(arg, int)), c = 1;
            break;
        case 'i':
				printf("%d", va_arg(arg, int)), c = 1;
				break;
		case 'f':
				printf("%f", va_arg(arg, double)), c = 1;
				break;
        case 's':
                str = va_arg(arg, char *), c = 1;
                if (str == NULL)
                {
                    printf("(nil)");
                    break;
                }
                printf("%s", str);
                break;
        }
        i++;
   }
   printf("\n"), va_end(arg);
}
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}