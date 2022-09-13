#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int print_last_digit(int n);
void times_table(void);


/**
 * main - check the code.
 * Return: Always 0.
 */

int main(void)
{
	times_table();
    	return (0);   
}

/**
  * _islower - checks if a character is lower case
  *
  * Return: It returns 1 if it's a lower case and zero if it isn't. 
  */

void times_table(void)
{	
	int i;
	int j;
	int x;

	/*Create a for loop of 9 with i*/
	for (i = 0; i < 10; i++)
	{
		/*Create a for loop of 9 with j*/
		for (j = 0; j < 10; j++)
		{
		   	/*x = i * j*/
			x = i * j;
		  	/*printchar x*/
			if (x <= 9)
				putchar(x + '0');
			else
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');

			putchar(32);
		}
	     	/*print new line*/
		putchar('\n');
	}
}
