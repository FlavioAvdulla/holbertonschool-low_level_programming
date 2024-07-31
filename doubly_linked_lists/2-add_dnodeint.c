#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
* @head: Double pointer to the head of the list.
* @n: Data to insert in the new node.
* 
* Return: The address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: Double pointer to the head of the list.
* @n: Data to insert in the new node.
* 
* Return: The address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
	}

	/**
	* free_dlistint - Frees a dlistint_t list.
	* @head: Pointer to the head of the list.
	*/
	void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
