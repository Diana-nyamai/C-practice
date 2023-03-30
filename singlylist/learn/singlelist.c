#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main(void)
{
    struct node *head = NULL;
    head = malloc(sizeof(struct node));

    if (head == NULL)
    {
        printf("an error occured allocating memory");
        return (1);
    }

    head -> data = 50;
    head -> link = NULL;

    printf("%d", head -> data);

    free(head);
    return (0);
}
