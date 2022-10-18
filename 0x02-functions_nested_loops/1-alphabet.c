#include "main.h"

/**
 *print_alphabet -  Write a function that prints the alphabet, in lowercase
 *Return: 0
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 97; alphabet < 123; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
