#include <stdio.h>
#include <string.h>

/**
  * puts_half - print half of a string
  * @str: The string in question
  */

void puts_half(char *str)
{
	int string_length = strlen(str);
	int i;
	int increment;

	if (string_length % 2 == 0)
		increment = string_length / 2;
	else
		increment = (string_length - 1) / 2;

	for (i = increment + 1; i < increment * 2 + 1; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
