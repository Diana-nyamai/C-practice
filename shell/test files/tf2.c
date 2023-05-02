#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;

    printf("Enter a line of text:\n");

    nread = getline(&line, &len, stdin);
    if (nread == -1) {
        perror("getline");
        exit(EXIT_FAILURE);
    }

    printf("You entered %ld characters:\n", nread);
    printf("%s", line);

    free(line);
    exit(EXIT_SUCCESS);
}
