#include "main.h"

/**
 * _memset() - fills the first n bytes of the memory area
 * @s: The memory area pointed to
 * @b: The constant byte b
 * @n: The number of bytes pointed to
 * Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
