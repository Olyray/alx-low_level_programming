#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints all arguments it receives, even the first one
  * @argc: the argument count
  * @argv: the argument vectors
  * Return: return 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
