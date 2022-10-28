#include "main.h"

/**
 * *cap_string -  function that capitalizes all words of a string
 * @str: passed string
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == 32 || str[i] == 9 || str[i] == 44 || str[i] == 59
				|| str[i] == 46 || str[i] == 40 || str[i] == 41
				|| str[i] == 63 || str[i] == 33 || str[i] == 34
				|| str[i] == 123 || str[i] == 125)
		{
			i++;
			if (str[i] >= 97 && str[i] <= 122)
				*(str + i) =  (str[i] - 32);
		}
		i++;
	}
	return (str);
}
