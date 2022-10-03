#include <stdio.h>
#include <ctype.h>

/**
  * _islower - checks if a character is lower case
  * @c: The character to be checked
  * Return: It returns 1 if it's a lower case and zero if it isn't.
  */

int _islower(int c)
{
	int checker = islower(c);

	if (checker > 0)
		return (1);
	else
		return (0);
}
