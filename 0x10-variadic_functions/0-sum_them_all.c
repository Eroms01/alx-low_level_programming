#include "variadic_functions.h"

/**
 * sum_them_all - prints sum of all variables to stdout
 * @n: variable
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count, sum;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (count = 0; count < n; count++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
