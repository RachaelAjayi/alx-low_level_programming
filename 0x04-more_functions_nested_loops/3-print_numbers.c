#include "main.h"

/**
 * print_numbers - print number 0-9
 * return: void
 */

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
