#include <stdio.h>
#include <string.h>

/**
  * puts2 - print the other string
  * @str: The target string
  */

void puts2(char *str)
{
	int string_length = strlen(str);
	int i;

	for (i = 0; i < string_length; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
