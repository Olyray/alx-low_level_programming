#include <stdio.h>

/**
 * main - prints alphabet
 * Return: zero
 */

int main(void)
{
	/*Declare an int with the value 96*/
	int numbers = 48;
	/*Create a for loop with 25*/
	int i;

	for (int i = 0; i < 10; i++)
		putchar(numbers + i);
	putchar(10);
	/*Use putc in the for loop*/
	return (0);
}
