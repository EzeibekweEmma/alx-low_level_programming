#include "main.h"

/**
 *print_last_digit - Write a function that prints the last digit of a number.
 *@num : input
 *Return: 0
 */

int print_last_digit(int num)
{
	num %= 10;

	if (num < 0)
		num *= -1;


	_putchar(num + '0');

	return (num);
}
