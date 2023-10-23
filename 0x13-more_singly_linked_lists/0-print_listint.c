#include <stdio.h>
#include "lists.h"

/**
 * print_listint -function prints all the elements of a listint_t list
 * @h: The list
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)

{

	size_t nodesno;

	for (nodesno = 0; h != NULL; nodesno++)
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
	}
	return (nodesno);
}
