#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    char *msg = "Hello, world!\n";
    ssize_t num_bytes;

    fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    num_bytes = dprintf(fd, "%s", msg);
    if (num_bytes == -1) {
        perror("dprintf");
        close(fd);
        return 1;
    }

    close(fd);
    return 0;
}
