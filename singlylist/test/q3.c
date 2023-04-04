#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    return (0);
}
/**
* add_nodeint_end - entry point
* @head: input
* @n: input
* Return: node at the end
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *ptr, *temp;

    temp = malloc(sizeof(listint_t));

    if (temp == NULL)
        return (NULL);

    temp->n = n;
    temp->next = NULL;

    if (*head == NULL)
    {
        *head = temp;
        return (temp);
    }
    ptr = *head;
    
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return (temp);
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