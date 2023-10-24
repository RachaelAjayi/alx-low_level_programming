#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the list where the new
 *       node should be added - index starts at 0.
 * @n: The integer for the new node to be stored.
 *
 * Return: If the function fails - NULL.
 *         Or the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;

	listint_t *h = *head;

	unsigned int x;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (x = 0; x < (idx - 1); x++)
	{
		if (h == NULL || h->next == NULL)
			return (NULL);

		h = h->next;
	}

	new->next = h->next;
	h->next = new;

	return (new);
}
