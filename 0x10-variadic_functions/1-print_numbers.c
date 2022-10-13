#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints integers separated by strings
 * @separator: separating string
 * @n: number of integers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;


	if (separator == NULL)
		return;
	va_start(ap, n);
	count = 0;
	while (count < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator && count < n - 1)
		{
			printf("%s", separator);
		}
		count++;
	}
	printf("\n");
	va_end(ap);
}
