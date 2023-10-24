#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - funciton returns the nth node of
 * a listint_t linked list
 * @head: head of a list.
 * @index: index of the node, starting at 0
 *
 * Return:nth node, If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index && head != NULL; x++)
	{
		head = head->next;
	}

	return (head);
}
