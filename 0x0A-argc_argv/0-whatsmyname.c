#include "main.h"

/**
 * main - program that prints its name
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int len = 0, i;
	char *arg = argv[argc - 1];

	while (arg[len])
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		putchar(arg[i]);
	}

	putchar('\n');
	return (0);
}
