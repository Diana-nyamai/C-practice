#include <stdio.h>
#include <stdlib.h>

struct nodes
{
    int data;
    struct nodes *link;
};

int main(void)
{
    struct nodes *firstnode = malloc(sizeof(struct nodes));
    firstnode -> data = 30;
    firstnode -> link = NULL;

    struct nodes *secondnode = malloc(sizeof(struct nodes));
    secondnode -> data = 40;
    secondnode -> link = NULL;
    firstnode -> link = secondnode;

    secondnode = malloc(sizeof(struct nodes));
    secondnode -> data = 50;
    secondnode -> link = NULL;
    firstnode -> link -> link = secondnode;

    printf("first node: %d\nsecondnode: %d\nthirdnode: %d\n", firstnode -> data, secondnode -> data, secondnode -> data);
    free(firstnode);
    free(secondnode);
    return (0);
}