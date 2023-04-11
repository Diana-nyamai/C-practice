#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}

/**
* read_textfile - entry point
* @filename: input
* @letters: input
* Return: 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *memory;
    int openf;
    size_t readf, writef;
    if (filename == 0)
        return (0);
    
    openf = open(filename, O_RDONLY);
    if (openf == -1)
        return (0);
    
    memory = malloc(sizeof(char) * letters);
    if (memory == NULL)
    {
        close(openf);
        return (0);
    }
    readf = read(openf, memory, letters);
    if (readf == -1)
    {
        free(memory);
        close(openf);
        return(0);
    }
    writef = write(STDOUT_FILENO, memory, readf);
    if (writef != readf || writef == -1)
    {
        free(memory);
        close(openf);
        return(0);
    }

    free(memory);
    close(openf);
    return (readf);
}