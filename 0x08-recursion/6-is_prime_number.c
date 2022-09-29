#include <stdio.h>
#include <string.h>
#include <math.h>

/**
  * is_prime_number - checks whether a number is a prime number
  * @n: the number to check
  * Return: 1 if the number is a prime number, 0 if it isn't. 
  */

int is_prime_number(int n)
{
	int prime_check;

	if (n == 1 || n == 2)
		return (0);
	if (n == 3)
		return (1);
	if ((n % 2) == 0)
		return (0);
	prime_check = is_prime_number(n - 1);
	return (prime_check);
}
