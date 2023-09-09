#include <stdio.h>

/**
 * main - Prints all the numbers base 16 in lowercase 0 to 9 a to f
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (num = 97; num < 103; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
