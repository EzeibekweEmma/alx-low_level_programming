#include <stdio.h>

/**
 * main - program that finds and prints the largest prime factor of the
 * number 612852475143
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	int i;

	for (i = 0; i < num; i++)
	{
		if (num % i == 0)
		{
			num /= i;
			i--;
		}
	}
	printf("%d\n", i);
	return (0);
}
