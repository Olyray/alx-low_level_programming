#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - a variadic function to add all the parameters
 * @n: the number of variadic parameters
 * @...: the variadic parameters
 * Return: the total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int final_sum = 0;
	unsigned int i;
	va_list pointer;

	if (n == 0)
		return (0);
	va_start(pointer, n);
	for (i = 0; i < n; i++)
		final_sum += va_arg(pointer, int);
	va_end(pointer);
	return (final_sum);
}
