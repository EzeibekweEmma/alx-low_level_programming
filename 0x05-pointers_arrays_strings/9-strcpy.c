#include "main.h"
#include <string.h>

/**
 * _strcpy - function that copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: dest
 * @src: src
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src);
	return (dest);
}
