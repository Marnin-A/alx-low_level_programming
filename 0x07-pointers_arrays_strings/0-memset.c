#include "main.h"

/**
 * _memset() - fills the first n bytes of the memory area
 * @s: The memory area pointed to
 * @b: The constant byte b
 * @n: The number of bytes pointed to
 * Returns a pointer to the memory area s
 /

 char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negative (zero or positive)
	*/
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
