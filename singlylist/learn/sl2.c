#include <stdio.h>
#include <stdlib.h>

struct nodes
{
    int data;
    struct nodes *link;
};

int countnodes(struct nodes *firstnode);

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
    
    countnodes(firstnode);
    free(firstnode);
    free(secondnode);
    return (0);
}
int countnodes(struct nodes *firstnode)
{
    int count = 0;

    if (firstnode == NULL) 
    printf("linked list is empty");

    struct nodes *ptr = NULL;
    ptr = firstnode;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr -> link;
    }
    printf("%d",count);
}