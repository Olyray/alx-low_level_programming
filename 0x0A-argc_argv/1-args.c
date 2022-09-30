#include <stdio.h>
#include <stdlib.h>

/**
  * main - print number of arguments
  * @argc: the argument count
  * @argv: the argument vectors
  * Return: return 0
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
