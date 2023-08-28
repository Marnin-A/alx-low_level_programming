#include "main.h"

/**
 * @n: number of bytes to be copied
 * @src: memory area from where the bytes are copied
 * @dest: memory address where the bytes are copied to
 *
 * return - dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while(i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
