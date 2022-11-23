#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: the string to be converted
 * Return: the integer
 */
int _atoi(char *s)
{
	/*create character array variable, and string length*/
	char *number_string;
	int string_length, converted_int, i, char_index = 0;

	/*traverse the string*/
	string_length = strlen(s);
	number_string = malloc(sizeof(number_string) * string_length);
	for (i = 0; i < string_length; i++)
	{
		/*if any character is - or +, check that the following is number*/
		if (s[i] == '-' || s[i] == '+')
		{
			if (isdigit(s[i + 1]))
			{
				number_string[char_index] = s[i];
				char_index++;
			}
		}
		/*If a character is a digit, add it to the array*/
		else if (isdigit(s[i]))
		{
			number_string[char_index] = s[i];
			char_index++;
		}
	}
	/*convert array to integer*/
	converted_int = atoi(number_string);
	free(number_string);
	/*return integer*/
	return (converted_int);
}
