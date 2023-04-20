#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int main(int argc, char const *argv[])
{
    int file;
    char *buffer = malloc(BUFFER_SIZE);
    size_t len = BUFFER_SIZE;
    ssize_t getline;

    if (argc < 2)
    {
        exit(EXIT_FAILURE);
    }

    file = open(argv[1], O_RDONLY, 0644);
    if (file == -1)
    {
        perror("open");
        exit(EXIT_FAILURE);
    }

    while ((getline = read(file, buffer, len)) != -1)
    {
        printf("The length is %zd\n", getline);
        if (write(STDOUT_FILENO, buffer, getline) != getline)
        {
            perror("write");
            exit(EXIT_FAILURE);
        }
        // write(STDOUT_FILENO, buffer, getline);
    }
    if (getline == -1)
    {
        perror("read");
    }

    free(buffer);
    close(file);
    return (EXIT_SUCCESS);
}