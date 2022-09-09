#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - compared the last number of n
 * Return: zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_number;

	last_number = n % 10;

	if (last_number > 5)
		printf("The last digit of %i is %i and is greater than 5\n", n, last_number);
	if (last_number == 0)
		printf("The last digit of %i is %i and is 0\n", n, last_number);
	if (last_number < 6 && last_number != 0)
		printf("The last digit of %i is %i and is less than 6 and not 0",
		n, last_number);
	return (0);
}
