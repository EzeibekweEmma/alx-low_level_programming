#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 1; i <= size; i++)
		{
			k = size - i;
			while (k > 0)
			{
				_putchar(' ');
				k--;
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
}

