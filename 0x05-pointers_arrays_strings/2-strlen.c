#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: value
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter])
		counter++;

	return (counter);
}
