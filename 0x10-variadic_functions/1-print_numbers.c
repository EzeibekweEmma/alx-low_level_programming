#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: this is the string to be printed between numbers
 * @n: this is the number of integers passed to the function
 * @...: integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nums;

	if (separator != '\0')
	{
		va_start(nums, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums, int));

			if (i != n-1)
				printf("%s", separator);
		}

		printf("\n");
		va_end(nums);
	}
}
