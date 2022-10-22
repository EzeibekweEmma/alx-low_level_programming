#include <stdio.h>

/**
 * main -  program that computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded)
 * Return: sum of all the multiples
 */

int main(void)
{
	int i, sum = 0, num = 1024;

	for (i = 0; i < num; i++)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;

	}
	printf("%d\n", sum);

	return (0);
}
