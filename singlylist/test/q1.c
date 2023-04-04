#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h);

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
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}

/**
* listint_len - entry point
* @h: input
* Return: list length
*/
size_t listint_len(const listint_t *h)
{
    size_t count = 0;
    const listint_t *ptr;

    ptr = h;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return (count);
}