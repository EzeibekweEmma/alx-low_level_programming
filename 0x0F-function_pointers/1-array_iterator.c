#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter on
 * each element of an array
 * @array: given array
 * @size: the size of the array
 * @action: a pointer to the function
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
