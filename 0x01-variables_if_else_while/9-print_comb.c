#include <stdio.h>

/**
 *main - Entry point
 *Write a program that prints all possible combinations of single-digit numbers
 *Return: Always 0 (Seccess)
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num != 57)
		{
			putchar(num);
			putchar(',');
		} else
			putchar(num);
	}

	putchar('\n');
	return (0);
}
