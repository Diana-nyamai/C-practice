#include "main.h"

int main(int argc, char const *argv[])
{
    int oldf, newf, fd_close;
    char buf[1024];
    ssize_t rf;
    ssize_t wrf;
    
    if (argc != 3)
    {
        dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    
    oldf = open(argv[1], O_RDONLY);
    if (oldf == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    rf = read(oldf, buf, sizeof(buf));
    
    newf = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
    if (newf == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }
    
    wrf = write(newf, buf, rf);
    
    
    fd_close = close(oldf);
    if (fd_close == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", oldf);
        exit(100);
    }
    
    fd_close = close(newf);
    if (fd_close == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", newf);
        exit(100);
    }
    
    return (0);
}