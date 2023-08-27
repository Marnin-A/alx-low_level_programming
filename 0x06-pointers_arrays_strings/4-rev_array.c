#include "main.h"
/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int temp, i, half;

	half = n / 2;
	for (i = 0; i < half; i++)
	{
		n--;
		temp = *(a + i);
		a[i] = a[n];
		a[n] = temp;
	}
}
