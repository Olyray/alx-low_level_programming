#include <stdio.h>
#include <string.h>
#include <math.h>

/**
  * _pow_recursion - returns the raised value of a number
  * @x: the base number
  * @y: the power
  * Return: the raised value
  */

int _pow_recursion(int x, int y)
{
	int raised_number;

	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	raised_number = x *  _pow_recursion(x, y - 1);
	return (raised_number);
}
