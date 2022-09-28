#include <stdio.h>
#include <string.h>

/**
  * factorial - returns the factorial of a number
  * @n: the number in question
  * Return: the factorial
  */

int factorial(int n)
{
	int result;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	result = n * factorial(n - 1);
	return (result);
}
