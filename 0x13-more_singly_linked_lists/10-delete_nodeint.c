#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list.
 * @head: head of a list.
 * @index: index of the node that should be deleted
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *temp;
	listint_t *next;

	temp = *head;

	if (index != 0)
	{
		for (x = 0; x < index - 1 && temp != NULL; x++)
		{
			temp = temp->next;
		}
	}

	if (temp == NULL || (temp->next == NULL && index != 0))
	{
		return (-1);
	}

	next = temp->next;

	if (index != 0)
	{
		temp->next = next->next;
		free(next);
	}
	else
	{
		free(temp);
		*head = next;
	}

	return (1);
}
