#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - a variadic function to print numbers and a separator
 * @separator: the separator
 * @n: the number of the parameters
 * @...: the variadic parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pointer;

	if (separator == NULL)
		exit(1);
	va_start(pointer, n);
	for (i = 0; i < n; i++)
		if (i != n - 1)
			printf("%i%s", va_arg(pointer, int), separator);
		else
			printf("%i", va_arg(pointer, int));
	printf("\n");
	va_end(pointer);
}
