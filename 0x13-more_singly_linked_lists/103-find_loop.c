#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * find_listint_loop -function that finds the loop in a linked list
 * @head: header  to the struct listint_t
 * Return: the adress of the node where the loop starts, or NULL, if no loop
 */

listint_t *find_listint_loop(listint_t *head)

{


	listint_t *slow;
	listint_t *fast;

	if (head == NULL)
		return (NULL);

	slw = head;
	fst = head;

	while (fst != NULL)
	{
		slw = slw->next;
		fst = fst->next->next;
		if (slw == fst)
		{
			slw = head;
			while (slw != fst)
			{
				slw = slw->next;
				fst = fst->next;
			}
			return (slw);
		}
	}
	return (NULL);
}
