#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    int fd;
    ssize_t rf;
    char buffer[1024];
    fd = open("fd1.txt", O_RDONLY | O_CREAT);
    if (fd == -1)
    {
        perror("open");
        exit(EXIT_FAILURE);
    }

    rf = read(fd, buffer, sizeof(buffer));
    if (rf == -1)
    {
        perror("read");
        exit(EXIT_FAILURE);
    }
    printf("Read %ld bytes: %.*s\n", rf, rf, buffer);
    close(fd);

    return 0;
}
