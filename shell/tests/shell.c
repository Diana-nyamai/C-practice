#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define MAX_INPUT_LENGTH 1024
#define PROMPT "#cisfun$ "

int main(void)
{
    char input[MAX_INPUT_LENGTH];
    char *argv[2];
    int status = 0;

    while (1) {
        printf("%s", PROMPT);
        fflush(stdout);

        if (fgets(input, MAX_INPUT_LENGTH, stdin) == NULL) {
            printf("\n");
            exit(EXIT_SUCCESS);
        }

        if (strcmp(input, "exit\n") == 0) {
            exit(EXIT_SUCCESS);
        }

        input[strcspn(input, "\n")] = '\0'; // remove newline character from input

        pid_t pid = fork();

        if (pid < 0) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            // Child process
            argv[0] = input;
            argv[1] = NULL;

            if (execve(argv[0], argv, NULL) == -1) {
                perror("execve");
                exit(EXIT_FAILURE);
            }
        } else {
            // Parent process
            pid_t wpid = waitpid(pid, &status, WUNTRACED);
            if (wpid == -1) {
                perror("waitpid");
                exit(EXIT_FAILURE);
            }
        }
    }

    return 0;
}
