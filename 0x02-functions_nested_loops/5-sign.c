#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n : the number to check.
 *
 * Return: 1 if n > 0 or 0 if n = 0 or -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
