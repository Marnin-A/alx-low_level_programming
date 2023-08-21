#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Array of characters
 */
void puts_half(char *str)
{
	int i, j;

	i = _strlen(&str);
	for (j = i - (i / 2); j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
