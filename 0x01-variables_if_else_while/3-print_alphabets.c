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
	for (int i = 0; i < 26; i++)
		putchar(alphabet + i);
	for (int i = 0; i < 26; i++)
		putchar(upper_case + i);
	putchar(10);
	/*Use putc in the for loop*/
	return (0);
}
