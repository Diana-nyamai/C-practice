#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>

int main(int argc, char const *argv[])
{
    int fd;
    ssize_t rf, wf;
    char buf[1024];
    char *words = "my name is Diana and I am a software engineer";

    fd = open("fd2.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
    if (fd == -1)
    {
        perror("open");
        exit(EXIT_FAILURE);
    }

    wf = write(fd, words, strlen(words));
    if (wf == -1)
    {
        perror("write");
        exit(EXIT_FAILURE);
    }

    // move the file pointer back to the beginning of the file
    if (lseek(fd, 0, SEEK_SET) == -1)
    {
        perror("lseek");
        exit(EXIT_FAILURE);
    }

    rf = read(fd, buf, sizeof(buf));
    if (rf == -1)
    {
        perror("read");
        exit(EXIT_FAILURE);
    }

    printf("Words read: %ld %.*s", rf, (int)rf, buf);
    
    close(fd);
    return 0;
}
