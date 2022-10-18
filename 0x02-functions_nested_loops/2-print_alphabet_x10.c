#include "main.h"

/**
 *print_alphabet_x10 -  Write a function that prints the alphabet 10 time
 *in lowercase
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int alphabet, count;

	count = 0;

	while (count < 10)
	{
		for (alphabet = 97; alphabet < 123; alphabet++)
		{
			_putchar(alphabet);
		}

		count++;

		_putchar('\n');
	}
}
