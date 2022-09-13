#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}

/**
  * _islower - checks if a character is lower case
  *
  * Return: It returns 1 if it's a lower case and zero if it isn't. 
  */

int _abs(int c )
{ 
	int value;

	value = abs(c);
	return (value);
}
