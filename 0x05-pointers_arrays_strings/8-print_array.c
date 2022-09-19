#include <stdio.h>

/**
  * swap_int - swap the paramenters
  * @a: The first to be swapped
  * @b: The second to be swapped
  */

void swap_int(int *a, int *b)
{
	int ninety_eight = *a;
	int forty_two  = *b;
	int *c = a;
	int *d = b;

	*c = forty_two;
	*d = ninety_eight;
}
