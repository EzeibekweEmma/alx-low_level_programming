#include "main.h"

/**
 *main - Write a program that prints _putchar, followed by a new line.
 *Return: 0
 */

int main(void)
{
	char output[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(output[i]);
	}


	_putchar('\n');
	return (0);
}
