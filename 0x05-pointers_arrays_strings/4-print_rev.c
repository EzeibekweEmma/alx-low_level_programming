#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		printf("%c", s[len]);
	}
	putchar('\n');
}
