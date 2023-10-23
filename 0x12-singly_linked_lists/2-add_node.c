#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -function adds a new code at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *n;
unsigned int len = 0;

while (str[len])
len++;

n = malloc(sizeof(list_t));
if (!n)
return (NULL);

n->str = strdup(str);
n->len = len;
n->next = (*head);
(*head) = n;

return (*head);
}