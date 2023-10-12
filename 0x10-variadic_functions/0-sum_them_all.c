#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramaters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0, return 0
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int index, sum = 0;

	va_start(par, n);

	for (index = 0; index < n; index++)
		sum += va_arg(par, int);

	va_end(par);

	return (sum);
}
