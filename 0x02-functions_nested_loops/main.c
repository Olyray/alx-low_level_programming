#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int print_last_digit(int n);
void times_table(void);
void print_to_98(int n);


/**
 * main - check the code.
 * Return: Always 0.
 */

int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}

/**
  * _islower - checks if a character is lower case
  *
  * Return: It returns 1 if it's a lower case and zero if it isn't. 
  */

void print_to_98(int n)
{
        if (n > 98)
        {
                int i;

                for (i = n; i >= 98; i--)
		{
                        printf("%i, ", i);
			printf("\n");
		}
        }
        else
        {
                int j;

                for (j = n; j <= 98; j++)
		{
                        printf("%i, ", j);
			printf("\n");
		}
        }
}
