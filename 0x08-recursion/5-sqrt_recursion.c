#include "main.h"

/**
 * sqrt_helper - a helper function for _sqrt_recursion that uses binary search
 * @n: the number to compute the square root of
 * @low: the lower bound of the search
 * @high: the upper bound of the search
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */

int sqrt_helper(int n, int low, int high)
{
	int mid;

	if (high == low)
		return (-1);

	mid = (low + high) / 2;

	if (mid * mid == n)
		return (mid);

	if (mid * mid > n)
		return (sqrt_helper(n, low, mid - 1));
	else
		return (sqrt_helper(n, mid + 1, high));
}



/**
 * _sqrt_recursion - computes the square root of a number using recursion
 * @n: the number to compute the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 1, n));
}
