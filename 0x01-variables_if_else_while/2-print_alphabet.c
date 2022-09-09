#include <stdio.h>

/**
 * main - prints alphabet
 * Return: zero
 */

int main(void)
{
	/*Declare an int with the value 96*/
	int alphabet = 97;
	int i;
	/*Create a for loop with 25*/
	for (i = 0; i < 26; i++)
		putchar(alphabet + i);
	putchar(10);
	/*Use putc in the for loop*/
	return (0);
}
