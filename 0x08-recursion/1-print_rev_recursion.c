#include <stdio.h>
#include <string.h>

/**
  *  _print_rev_recursion - prints a string reversed recursively
  * @s: the string to be printed
  */

void _print_rev_recursion(char *s)
{
	int length = strlen(s);
	if (s = s[0])
	{
		printf("%s\n", s[0]);
		return;
	}
	_print_rev_recursion(s[length - 1]);
}
