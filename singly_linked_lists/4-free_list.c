#include <stdlib.h>
#include "lists.h"

/**
* free_list - Frees a list_t list.
* @head: The head of the list_t list.
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head_next;
		free(temp->str);
		free(temp);
	}
}
