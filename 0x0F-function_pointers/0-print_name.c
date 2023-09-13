#include "function_pointers.h"

/*
 * print_name - Executes a function that prints a name
 *
 * @name: name of a person
 * @f: pointer to the function that prints the name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return ;
	(*f)(name);
}
