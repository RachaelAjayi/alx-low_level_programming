#include "main.h"
/**
 * _strpbrk - function locates the first occurence in a string
 * @s: input string
 * @accept: any of the bytes in the string input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int x;

		while (*s)
		{
			for (x = 0; accept[x]; x++)
			{
			if (*s == accept[x])
			return (s);
			}
		s++;
		}

	return ('\0');
}
