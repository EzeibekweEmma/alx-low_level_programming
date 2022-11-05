#include "main.h"

/**
 * main - at prints all arguments it receives.
 * @argc: Argument counter
 * @argv: Argument vector
 * Return:  0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		putchar('\n');
	}
	return (0);
}
