#include "main.h"

/**
 *print_last_digit - Write a function that prints the last digit of a number.
 *@num : input
 *Return: 0
 */

int print_last_digit(int num)
{
	if (num < 0)
		num *= -1;

	while (num > 9)
	{
		num %= 10;
	}

	_putchar(num + '0');
	_putchar('\n');

	return (num);
}
