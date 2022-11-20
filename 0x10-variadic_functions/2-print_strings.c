#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: this is the string to be printed between the strings
 * @n: this is the number of strings passed to the function
 * @...: strings passed
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list strs;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(strs);
}
