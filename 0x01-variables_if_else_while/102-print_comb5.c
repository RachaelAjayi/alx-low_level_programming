#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p, q;

	for (p = 0; p < 100; p++)
	{
		for (q = 0; q < 100; q++)
		{
			if (p < q)
			{
				putchar((p / 10) + 48);
				putchar((p % 10) + 48);
				putchar(' ');
				putchar((q / 10) + 48);
				putchar((q % 10) + 48);
				if (p != 98 || q != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
