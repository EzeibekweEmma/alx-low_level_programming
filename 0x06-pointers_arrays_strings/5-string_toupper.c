#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @str: string to change
 * Return: uppercase str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			*(str + i) = (str[i] - 32);

		i++;
	}
		return (str);
}
