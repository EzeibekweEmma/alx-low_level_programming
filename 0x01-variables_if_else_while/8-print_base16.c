#include <stdio.h>

/**
 *main - Entry point
 *Write a program that prints all the numbers of base 16 in lowercase
 *Return: Always 0 (Seccess)
 */

int main(void)
{
	char base, hex;

	base = 48;
	hex = 97;

	while (base < 58 || hex < 103)
	{

		if (base < 58)
		{
			putchar(base);
			base++;
		} else
		{
			putchar(hex);
			hex++;
		}
	}

	putchar('\n');
	return (0);
}
