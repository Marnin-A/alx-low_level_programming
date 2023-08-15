#include "main.h"

/**
 * print_to_98 - Prints all natural
 * numbers from n to 98
 * @n: the number to start counting from n to 98
 * Return: void
 */

void print_to_98(int x)
{
	int i;

	if (x < 98)
	{
		for (i = x; i < 99; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ')
		}
	}
	else
	{
		for (i = x; i > 97; i--)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
}
