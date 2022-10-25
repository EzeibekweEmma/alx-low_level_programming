#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int len, i;

	len = strlen(str);
	i = len / 2;

	while (i < len)
	{
		printf("%c", str[i]);
		i++;
	}
	putchar('\n');
}
