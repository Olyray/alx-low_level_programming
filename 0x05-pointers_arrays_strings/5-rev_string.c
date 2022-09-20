#include <stdio.h>
#include <string.h>

/**
  * rev_string - reverse a string
  * @s: The string to be reversed
  */

void rev_string(char *s)
{
	/*Create an array of the length of the string*/
	int string_length = strlen(s);
	char reversed[500];
	int i;

	/*Create a for loop with the length of the array*/
	for (i = 0; i < string_length; i++)
		/**
		  * append the string into the created
		  * empty string array starting from stringlen - 1
		  */
		reversed[i] = s[string_length - (i + 1)];
	/*Print the new string*/
	for (i = 0; i < string_length; i++)
		*(s + i) = *(reversed + i);
}
