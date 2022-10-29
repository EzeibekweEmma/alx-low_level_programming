#include "main.h"

/**
 * *_strncat - function that copies a string
 * @dest: input of s1
 * @src: input of s2
 * @n: number of index
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dLen = 0, sLen = 0;
	int len;
	int i, j = 0;

	while (dest[dLen])
	{
		dLen++;
	}

	while (src[sLen])
	{
		sLen++;
	}

	if (n <= sLen)
		len = dLen + n - 1;
	else
		len = dLen + sLen;


	for (i = dLen; i <= len; i++)
	{
		dest[i] = src[j++];
	}

	dest[i + 1] = '\0';

	return (dest);
}
