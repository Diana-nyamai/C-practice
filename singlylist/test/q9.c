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
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 5, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
/**
 * insert_nodeint_at_index - entry point
 * @head: input
 * @idx: input
 * @n: input
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *currentnode = *head, *prevnode = NULL, *newnode;
    unsigned int i;

    newnode = malloc(sizeof(listint_t));
    if (newnode == NULL)
        return (NULL);
    newnode->n = n;

    for (i = 0; i < idx && currentnode != NULL; i++)
    {
        prevnode = currentnode;
        currentnode = currentnode->next;
    }
    if (i < idx)
    {
        free(newnode);
        return (NULL);
    }

    newnode->next = currentnode;
    if (prevnode == NULL)
    {
        *head = newnode;
    }
    else
    {
        prevnode->next = newnode;
    }
    return (newnode);

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