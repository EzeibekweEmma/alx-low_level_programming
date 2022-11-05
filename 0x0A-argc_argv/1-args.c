#include "main.h"

/**
 * main - program that prints the number of arguments passed into it
 * @argc: Argument counter
 * @argv: Argument vector
 * Return:  0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	argc -= 1;
	putchar(argc + '0');
	putchar('\n');
	return (0);
}
