
        #include <stdio.h>
        int main(int argc, char const *argv[])
        {
            char buffer[98] = {0x00};
            int i = 0;
            int *j;
            j = &i;
            *j = 10;
        while (i < 98)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
            return 0;
        }
        
        