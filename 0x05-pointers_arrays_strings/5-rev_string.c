#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int len, i, j;

	len = strlen(s);
	char a[len];

	i = 0, j = 9;

	while (len--)
		a[len] = s[len];

	while (j--)
		s[i++] = a[j];
}
