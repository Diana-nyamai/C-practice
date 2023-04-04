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
    listint_t *node;

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
    node = get_nodeint_at_index(head, 5);
    printf("%d\n", node->n);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
/**
 * get_nodeint_at_index - entry point
 * @head: input
 * @index: input
 * Return: 0
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    int i;
    listint_t *node = head;

    for (i = 0; node != NULL && i < index; i++)
    {
        node = node->next;
    }

    if (node != NULL && i == index)
    {
        return (node);
    }
    else
    {
        return (NULL);
    }
}

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

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
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
