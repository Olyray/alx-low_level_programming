#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - multiply two numbers
 * @argv: the arguments
 * @argc: the argument count
 * Return: the pointer
 */

int main(int argc, char *argv[])
{
	int first_number;
	int second_number;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (isdigit(*argv[1]) && isdigit(*argv[2]))
	{
		first_number = atoi(argv[1]);
		second_number = atoi(argv[2]);
		product = first_number * second_number;
		printf("%i\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

}
