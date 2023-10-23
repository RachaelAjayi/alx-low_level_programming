#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function frees a listint_t list
 * @head: head of a listint_t list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{

		while ((tmp = *head) != NULL)
		{
			*head = (*head)->next;
			free(tmp);
		}
		*head = NULL;
	}
}
