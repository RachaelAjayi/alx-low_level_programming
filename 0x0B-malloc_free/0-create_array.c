#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of char and initialize it
 * @size: size of array
 * @c: char to intiialize the array
 *
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int index;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		string[index] = c;
	return (string);
}
