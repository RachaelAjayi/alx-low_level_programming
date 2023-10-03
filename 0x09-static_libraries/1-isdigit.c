#include "main.h"

/**
 * _isdigit -checks for a digit (0 through 9)
 * @c: char to be checked
 *
 * Return: 0 or 1, 1 if a digit or 0 if not a digit
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
