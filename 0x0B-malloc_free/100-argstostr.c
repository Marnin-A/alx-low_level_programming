#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, len, k = 0;
	char *str, *s;
	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		*s = av[i];
		j =0;

		while (s[j++] != '\0' )
			len++;
		len++;
	}

	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[k] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}
