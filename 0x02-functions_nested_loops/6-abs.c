#include "main.h"

/**
 * _abs - Write a function that computes the absolute value of an integer.
 * @n : number to check
 * Return:0 or 1
 */

int _abs(int n)
{
	int abs = n >= 0 ? n : n * -1;

	return (abs);
}
