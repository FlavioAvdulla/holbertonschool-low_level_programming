#include <stdio.h>
#include "lists.h"

/**
* print_dlistint - Prints all the elements of a dlistint_t list.
* @h: Pointer to the head of the list.
* Return: The number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

/**
* free_dlistint - Frees a dlistint_t list.
* @head: Pointer to the head of the list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
