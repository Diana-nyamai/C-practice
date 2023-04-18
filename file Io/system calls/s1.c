#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
    int fd = open("s1.txt", O_CREAT | O_RDONLY, 0644);
    if (fd == -1)
    {
        perror("faled to open");
        return (1);
    }
    close(fd);              
    return 0;
}
