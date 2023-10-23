#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end
 * of a listint_t list
 * @head: head of a list.
 * @n: n element, value to be stored in the new node
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *new_node;

	listint_t *tail;

	(void)tail;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	tail = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new_node;
	}

	return (new_node);
}
