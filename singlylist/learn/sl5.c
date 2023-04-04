// trying the counting the list on my own
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void *addfirst(struct node **firstnode, int n);
int addnode(struct node *firstnode, int n);
int countnodes(struct node *firstnode);
void print_list(struct node *firstnode);
int main(void)
{
    struct node *firstnode = malloc(sizeof(struct node));
    firstnode -> data = 30;
    firstnode -> link = NULL;

    struct node *secondnode = malloc(sizeof(struct node));
    secondnode -> data = 40;
    secondnode -> link = NULL;
    firstnode -> link = secondnode;

    secondnode = malloc(sizeof(struct node));
    secondnode -> data = 50;
    secondnode -> link = NULL;
    firstnode -> link -> link = secondnode;

    addfirst(&firstnode, 10);
    addnode(firstnode, 60);
    print_list(firstnode);
    countnodes(firstnode);
    return (0);
}
void *addfirst(struct node **firstnode, int n)
{
    struct node *newnode;

    newnode = malloc(sizeof(struct node));
    newnode->data = n;
    newnode->link = *firstnode;
    *firstnode = newnode;
}

int addnode(struct node *firstnode, int n)
{
    struct node *ptr, *temp;

    temp = malloc(sizeof(struct node));
    temp->data = n;
    temp->link = NULL;

    ptr = firstnode;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}
void print_list(struct node *firstnode)
{
    if (firstnode == NULL)
    {
        printf("The list is empty");
    }

    struct node *ptr;
    ptr = firstnode;

    while(ptr != NULL)
    {
        printf("The list of elements %d, \n", ptr -> data);
        ptr = ptr -> link;
    }
}
int countnodes(struct node *firstnode)
{
    int count = 0;

    if (firstnode == NULL)
    {
        printf("The linked list is empty");
    }

    struct node *ptr;
    ptr = firstnode;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr -> link;
    }

    printf("The linked list has %d elements ", count);
    return (0);
}