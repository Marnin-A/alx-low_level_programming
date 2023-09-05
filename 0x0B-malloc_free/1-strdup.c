#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *newStr;
	int len = 0;
	int i = 0;

	while (*str != '\0')
	{
		len++;
	}
	if (strlen(str) != 0 )
	{
		newStr = (char *)malloc(len * sizeof(char));

		if(newStr == 0)
			return (0);
		while (i < len)
		{
			*(i + newStr) = *(i + str);
			i++;
		}
		return newStr;
	}
	else
	{
		return (0);
	}
}
