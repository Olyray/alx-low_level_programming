#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - a variadic function to print numbers and a separator
 * @separator: the separator
 * @n: the number of the parameters
 * @...: the variadic parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pointer;
	char *checker;

	if (separator == NULL)
		exit(1);
	va_start(pointer, n);
	for (i = 0; i < n; i++)
	{
		checker = va_arg(pointer, char *);
		if (i != n - 1)
		{
			if (checker == NULL)
				printf("nil%s", separator);
			else
				printf("%s%s", checker, separator);
		}
		else
		{
			if (checker == NULL)
				 printf("nil");
			else
				printf("%s", checker);
		}
	}
	printf("\n");
	va_end(pointer);
}
