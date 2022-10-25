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
	if (len % 2 != 0)
		i = (len -= 1) / 2;
	else
		i = len / 2;

	while (i < len)
	{
		printf("%c", str[i]);
		i++;
	}
	putchar('\n');
}
