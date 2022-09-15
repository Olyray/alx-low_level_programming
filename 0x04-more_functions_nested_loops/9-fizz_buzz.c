#include <stdio.h>

/**
  * main - do the fizz buzz test
  * Return: 0
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		/*if i mod 3 = 0 and i mod 5 = 0 print FizzBuzz*/
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		/*else if i mod 3 = 0 print Fizz*/
		else if (i % 3 == 0)
			printf("Fizz ");
		/*else if i mod 5 = 0 print Buzz*/
		else if (i % 5 == 0)
			printf("Buzz ");
		/*else print i*/
		else
			printf("%i ", i);

	}
	printf("\n");

	return (0);

}
