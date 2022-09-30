#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - add numbers
  * @argc: the argument count
  * @argv: the argument vectors
  * Return: return 0
  */

int main(int argc, char *argv[])
{
	int i;
	int check_number = 0;
	int addition = 0;

	if (argc <= 1)
	{
		printf("0\n");
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
		check_number = isdigit(*argv[i]);
		if (check_number == 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
	addition += atoi(argv[i]);
	}
	printf("%i\n", addition);
	return (0);
}
