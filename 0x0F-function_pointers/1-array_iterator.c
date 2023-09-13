#include "function_pointers.h"

/*
 * array_iterator - executes a function given on each element of an array.
 *
 * @array: array of elements to be iterated over.
 * @size: length of the array.
 * @action: function executed on array elements
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
		while (i < size)
		{
			(action)(array[i]);
			i++;
		}
}
