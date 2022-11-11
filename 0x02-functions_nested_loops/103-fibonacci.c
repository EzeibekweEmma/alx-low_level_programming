#include <stdio.h>
/**
 * main - program that finds and prints the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, end = 0;
	int sum = 0;

	while (end < 4000000)
	{
		end = a + b;
		a = b;
		b = end;
		if (end % 2 == 0)
			sum += end;
	}
	printf("%i\n", sum);
	return (0);
}
