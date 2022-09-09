#include <stdio.h>

/**
 * main - prints alphabet
 * Return: zero
 */

int main(void)
{
	/*Declare an int with the value 96*/
	int reverse = 122;
	/*Create a for loop with 25*/
	int i;

	for (i = 0; i < 26; i++)
		putchar(reverse - i);
	putchar(10);
	/*Use putc in the for loop*/
	return (0);
}
