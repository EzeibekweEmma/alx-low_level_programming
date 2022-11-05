#include "main.h"
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: Argument counter
 * @argv: Argument vector
 * Return:  0 / 1
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]), b = atoi(argv[2]);
	int sum = a * b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", sum);
	return (0);
}
