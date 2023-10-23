#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked listint_t list.
 * @h: linked list head
 *
 * Return: numbers of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
