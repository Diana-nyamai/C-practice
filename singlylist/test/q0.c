#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}

size_t print_listint(const listint_t *h)
{
    size_t count = 0; 
    const listint_t *ptr;

    if (h == NULL)
    {
        printf("the list is empty");
        return (0);
    }
    ptr = h;

    while (ptr != NULL)
    {
        printf("%d\n", ptr -> n);
        count++;
        ptr = ptr -> next;
    }
    return (count);
}
