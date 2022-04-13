#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a func given as parameter on
 * each element of an array
 * @array: input integer array
 * @size: size of array
 * @action: pointer to the function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
