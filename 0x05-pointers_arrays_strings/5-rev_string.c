#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int i, j, len;
	char a[10];

	len = strlen(s);
	i = 0, j = 9;

	while (len--)
		a[len] = s[len];

	while (j--)
		s[i++] = a[j];
}
