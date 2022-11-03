#include "main.h"

/**
 * factorial -  function that returns the factorial of a given number
 * @n: number to factorlize
 * Return: factorial
 */

int factorial(int n)
{
	return ((n < 0) ? -1 : (n == 0) ? 1 : n * factorial(n - 1));
}
