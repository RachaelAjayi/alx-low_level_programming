#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of
 * a listint_t list
 * @head: head of a list.
 *
 * Return: 0 if empty
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	head_node = (*head)->n;

	*head = (*head)->next;

	free(temp);

	return (head_node);
}
