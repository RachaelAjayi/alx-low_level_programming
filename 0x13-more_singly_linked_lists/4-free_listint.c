#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: head beginning node of a list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list);
	}
}
