#include <stdio.h>

/**
 * main - prints alphabet
 * Return: zero
 */

int main(void)
{
	/*Declare an int with the value 96*/
	int alphabet = 97;
	int upper_case = 65;
	/*Create a for loop with 25*/
	int i;
	int j;

	for (i = 0; i < 26; i++)
		putchar(alphabet + i);
	for (j = 0; j < 26; j++)
		putchar(upper_case + j);
	putchar(10);
	/*Use putc in the for loop*/
	return (0);
}
