#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
size_t a = 0;

while (h)
{
a++;
h = h->next;
}
return (a);
}
