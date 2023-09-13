#include "function_pointers.h"

/*
 * print_name - Executes a function that prints a name
 *
 * @name: name of a person
 * @(*f)(char *): function that prints the name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
