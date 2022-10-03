#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - calculate how much change
  * @argc: the argument count
  * @argv: the argument vectors
  * Return: return 0
  */

int main(int argc, char *argv[])
{
	int cents_int;
	int coins[5] = {25, 10, 5, 2, 1};
	int cash[5] = {0, 0, 0, 0, 0};
	int result;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (*argv[1] < 0)
	{
		printf("0");
		return (0);
	}
	cents_int = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (cents_int >= coins[i])
		{
			cash[i] = cents_int / coins[i];

			cents_int = cents_int % coins[i];
		}
	}
	result = cash[0] + cash[1] + cash[2] + cash[3] + cash[4];
	printf("%i\n", result);
	return (0);
}
