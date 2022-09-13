#include <stdio.h>

/**
  * print_alphabet_x10 - prints the alphabet ten times
  * Return: void
  */
void print_alphabet_x10(void)
{
	int alphabet = 97;
	int i;
	int j;
	/*Create a for loop with 25*/
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
			putchar(alphabet + i);
		putchar(10);
	}
}
