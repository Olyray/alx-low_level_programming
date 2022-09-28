#include <math.h>
#include <stdio.h>
#include <string.h>

/**
  * _sqrt_recursion - returns the raised value of a number
  * @n: the number to be checked
  * Return: the square root
  */

int _sqrt_recursion(int n)
{
	float number;
	int square_root;

	number = sqrt(n);
	square_root = (int)number;
	if (square_root == number)
		return (square_root);
	else
		return (-1);
}
