#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head beginning of a list.
 *
 * Return: pointer to the first node of the reversed lsit
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *rev;

	prev = NULL;
	rev = NULL;

	while (*head != NULL)
	{
		rev = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = rev;
	}

	*head = prev;
	return (*head);
}
