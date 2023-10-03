#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that multiplies two numbers by  taking first two integer arguments
 * @argc: Number of command line argument
 * @argv: Array name
 * Return: 1 if it does not receive two argument, otherwise 0
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		y = 1;

		for (x = 1; x < 3; x++)
		y *= atoi(argv[x]);

		printf("%d\n", y);
	}

	return (0);
}
