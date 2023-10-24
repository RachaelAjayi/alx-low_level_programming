#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to the structure listint_t
 * Return: number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)

{

int prints = 0;

size_t count;

const listint_t *curr;

curr = head;

count = 0;

	while (curr != NULL)

{
	count++;
	prints = curr - curr->next;
	printf("[%p] %i\n", (void *)curr, cu 
			if (prints > 0)
										{
											curr = curr->next;
																				}
										else
										{																				printf("-> [%p] %i\n", (void *)curr->next, curr->next->n);
																				break;

}																				}

return (count);

}
