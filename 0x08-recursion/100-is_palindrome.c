#include "main.h"

int check_pal(char *s, int x, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function determines if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is a string, 0 it's not a string
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be calculated
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @x: iterator
 * @len: length of the string
 *
 * Return: 1 if s is a palindome and 0 if it is not a palindrome
 */
int check_pal(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
		return (0);
	if (x >= len)
		return (1);
	return (check_pal(s, x + 1, len - 1));
}
