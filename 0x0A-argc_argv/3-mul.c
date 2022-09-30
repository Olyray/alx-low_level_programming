#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiply the two argument vectors
 * @argc: the argument count
 * @argv: the argument vectors
 * Return: return 0 if fine, return 1 if
 * the argument count is not 2
 */

int main(int argc, char *argv[])
{
	int first_number;
	int second_number;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	first_number = atoi(argv[1]);
	second_number = atoi(argv[2]);
	printf("%i\n", first_number * second_number);
	return (0);
}
