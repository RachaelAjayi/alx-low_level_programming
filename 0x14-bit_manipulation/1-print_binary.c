#include "main.h"
#include <stdio.h>

/**
 * print_binary - function prints the binary representation
 * of a number.
 * @n: unsigned long integer.
 *
 * Return: Always 0
 */
void print_binary(unsigned long int n)
{
	if (n < 2)
	{

		_putchar(n + '0');
	}

	else
	{
	print_binary(n >> 1);

	}
}
