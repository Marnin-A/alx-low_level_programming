#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	int i;

	if (size)
	{
		char *arr = (char*)malloc(size * sizeof(char));
		for(i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
	return (0);
}
