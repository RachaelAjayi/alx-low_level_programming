#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, binary;

	if (!b)
		return (0);

	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, binary = 1; len >= 0; len--, binary *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			i += binary;
		}
	}

	return (i);
}
