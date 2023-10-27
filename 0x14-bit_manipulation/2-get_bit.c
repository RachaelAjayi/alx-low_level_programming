#include "main.h"

/**
 * get_bit - function returns the value of a bit at a given
 * index.
 * @n: unsigned long integer.
 * @index: index of the bit starting form 0.
 *
 * Return: value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0 && index < 64)
		return (0);

	for (x = 0; x <= 63; n >>= 1, x++)
	{
		if (index == x)
		{
			return (n & 1);
		}
	}

	return (-1);
}
