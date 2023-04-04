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

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);
    return (0);
}
/**
* add_nodeint - entry point
* @head: input
* @n: input
* Return: 0
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *newnode = malloc(sizeof(listint_t));

    newnode->n = n;
    newnode->next = *head;
    *head = newnode;
}

size_t print_listint(const listint_t *h)
{
    size_t count = 0; 
    const listint_t *ptr;

    ptr = h;

    while (ptr != NULL)
    {
        printf("%d\n", ptr -> n);
        count++;
        ptr = ptr -> next;
    }
    return (count);
}
