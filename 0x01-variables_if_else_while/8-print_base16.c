#include <stdio.h>

/**
 * main - prints alphabet
 * Return: zero
 */

int main(void)
{
	/*Declare an int with the value 96*/
	int numeric = 48;
	int alpha = 97;
	/*Create a for loop with 25*/
	int i;
	int j;

	for (i = 0; i < 10; i++)
		putchar(numeric + i);
	for (j = 0; j < 6; j++)
		putchar(alpha + j);
	putchar(10);
	/*Use putc in the for loop*/
	return (0);
}
