#include <stdio.h>
#include <ctype.h>
int _islower(int c);

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int r;

    	r = _islower('H');
    	putchar(r + '0');
    	r = _islower('o');
    	putchar(r + '0');
    	r = _islower(108);
    	putchar(r + '0');
    	putchar('\n');
    	return (0);    
}

/**
  * _islower - checks if a character is lower case
  *
  * Return: It returns 1 if it's a lower case and zero if it isn't. 
  */

int _islower(int c)
{
	int checker = islower(c);
	
	if (checker > 0)
		return(1);
	else if (checker == 0)
		return(0);
}
