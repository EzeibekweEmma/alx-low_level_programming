#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character of a string, starting
 * with the first character,
 * @str: string
 */
void puts2(char *str)
{
	int len, i = 0;

	len = strlen(str);

	while (i < len)
	{
		printf("%c", str[i]);
		i += 2;
	}
	putchar('\n');
}
