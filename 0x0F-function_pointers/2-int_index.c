#include "function_pointers.h"

/*
 * int_index - a function that searches for an integer.
 *
 * @array: array of integers.
 * @size: the number of elements in the array.
 * @cmp: a pointer to the function to be used to compare values.
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL)
		return (-1);
	int i = 0;

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
