// Implementation of read() that reads a file and prints the output

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main(int argc, char const *argv[])
{
    char buffer[BUFFER_SIZE];
    ssize_t read_data;
    if (argc < 2)
    {
        fprintf(stderr, "ERROR: %s \n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int fd = open(argv[1], O_CREAT | O_RDONLY);
    if (fd == -1)
    {
        perror("Error in opening file ");
        exit(EXIT_FAILURE);
    }

    while ((read_data = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        // cares whether the number of bytes written are same with the ones read
        if (write(STDOUT_FILENO, buffer, read_data) != read_data)
        {
            perror("reading error");
            exit(EXIT_FAILURE);
        }
    }

    if (read_data == -1)
    {
        perror("read");
        exit(EXIT_FAILURE);
    }

    if (close(fd) == -1)
    {
        perror("error cosing");
        exit(EXIT_FAILURE);
    }
    return EXIT_SUCCESS;
}

