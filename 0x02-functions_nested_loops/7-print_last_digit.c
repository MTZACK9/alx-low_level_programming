#include "main.h"

/**
 * print_last_digit  - prints the last digit of a number.
 *
 * @n : The number
 *
 * Return: the value of the last digit.
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	if (n < 0)
		digit = -1 * (n % 10);

	_putchar(digit + '0');
	return (digit);
}
