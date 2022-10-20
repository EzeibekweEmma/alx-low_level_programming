#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 * @c: Returns 1 if c is uppercasr
 * Return: 1 if c is uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
