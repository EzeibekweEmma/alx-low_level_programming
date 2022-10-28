#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array to be reversed
 * @n: length of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, b;

	n -= 1;
	while (i < n)
	{
		b = a[i];
		*(a + i) = *(a + n);
		*(a + n) = b;
		i++;
		n--;
	}
}
