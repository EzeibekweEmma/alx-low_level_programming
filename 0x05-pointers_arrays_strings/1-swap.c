#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: value for a
 * @b: value for b
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b, *b = c;
}
