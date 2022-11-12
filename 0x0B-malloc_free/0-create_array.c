#include "main.h"

/**
 * create_array - function that creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: size of array
 * @c: char
 * Return: ptr
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;


	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
