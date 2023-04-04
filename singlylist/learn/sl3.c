#include <stdio.h>
#include <stdlib.h>

struct nodes
{
    int data;
    struct nodes *link;
};

void print_list(struct nodes *firstnode);
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
    
    print_list(firstnode);
    free(firstnode);
    free(secondnode);
    return (0);
}
void print_list(struct nodes *firstnode)
{
    if (firstnode == NULL)
        printf("The link list is empty");
    
    struct nodes *ptr = NULL;
    ptr = firstnode;

    while (ptr != NULL)
    {
        printf("%d, ", ptr -> data);
        ptr = ptr -> link;
    }
}