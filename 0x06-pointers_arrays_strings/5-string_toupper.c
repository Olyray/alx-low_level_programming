#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
  *  string_toupper - compares two strings
  * @str: The string to be converted
  * Return: The string converted to upper case
  */

char *string_toupper(char *str)
{
	int string_length = strlen(str);
	int i;

	for (i = 0; i < string_length; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
