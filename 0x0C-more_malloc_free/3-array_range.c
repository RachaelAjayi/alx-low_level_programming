#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function creates an array of integers
 * @min: minimum range of values 
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new created array, NULL if min>max
 */
int *array_range(int min, int max)
{
	int *p;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		p[x] = min++;

	return (p);
}
