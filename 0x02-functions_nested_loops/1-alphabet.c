#include <stdio.h>

/**
  * print_alphabet - prints letters of the alphabet
  * Return: void
  */

void print_alphabet(void)
{
	int alphabet = 97;
	int i;
	/*Create a for loop with 25*/
	for (i = 0; i < 26; i++)
		putchar(alphabet + i);
	putchar(10);
	/*Use putc in the for loop*/
}
