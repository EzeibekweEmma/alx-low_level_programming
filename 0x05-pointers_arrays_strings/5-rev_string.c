#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int len = strlen(s);

	puts(s);
	putchar('\n');
	while (len--)
	{
		printf("%c", s[len]);
	}
	putchar('\n');
}
