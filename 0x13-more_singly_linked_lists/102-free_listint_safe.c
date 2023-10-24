#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: header to the struct listint_t
 * Return: size_t, number of nodes in the linked list
 */

size_t free_listint_safe(listint_t **h)

{
	int diff = 0;
	size_t count;
	listint_t *tmp;
	listint_t *curr;

	if (h == NULL)
		return (0);
	if (*h == NULL)
		return (0);

	curr = *h;

	count = 0;
	while (curr != NULL)
	{
		count++;
		diff = curr - curr->next;
		if (diff > 0)
		{
			tmp = curr;
			curr = curr->next;
			free(tmp);
		}
		else
			break;
	}
	*h = NULL;
	return (count);
}
