#include "main.h"

/**
 * _sqrt_recursive_helper - function for calculating the natural square root
 * @n: The number for which to find the square root
 * @start: The lower bound of the current search range
 * @end: The upper bound of the current search range
 *
 * Return: the resulting square root
 */
int _sqrt_recursive_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}

	if (start >= end)
	{
		return (-1);
	}

	if (mid * mid > n)
		return (_sqrt_recursive_helper(n, start, mid - 1));
	return (_sqrt_recursive_helper(n, mid + 1, end));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number for which to find the square root
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
        if (n < 0)
        {
                return (-1);
        }

        if (n == 0 || n == 1)
        {
                return (n);
        }

        return (_sqrt_recursive_helper(n, 1, n));
}
