#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * find_listint_loop -function that finds the loop in a linked list
 * @head: header  to the  listint_t
 * Return: the adress of the node where the loop starts, or NULL, if no loop
 */

listint_t *find_listint_loop(listint_t *head)

{


	listint_t *lw;
	listint_t *fst;

	if (head == NULL)
		return (NULL);

	lw = head;
	fst = head;

	while (fst != NULL)
	{
		lw = lw->next;
		fst = fst->next->next;
		if (lw == fst)
		{
			lw = head;
			while (lw != fst)
			{
				lw = lw->next;
				fst = fst->next;
			}
			return (lw);
		}
	}
	return (NULL);
}
