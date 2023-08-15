#include "main.h"
/**
 * times_table - Prints the
 * multiplication table from 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			_putchar(product);
			if (j == 9)
			{
				_putchar('\n');
			}
		}
	}
}
