#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory area where is stored
 *@src: memory area where it is copied
 *@n: number of bytes
 *
 *Return: copied memory with pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
