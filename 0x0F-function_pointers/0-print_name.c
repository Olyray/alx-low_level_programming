#include <stdio.h>

/**
 * print_name - prints the name
 * @name: the name to print
 * @f: the function to use
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
