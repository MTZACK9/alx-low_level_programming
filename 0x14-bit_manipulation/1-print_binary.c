#include "main.h"

/**
 * _length - find the length of @n
 *
 * @n: value.
 *
 * Return: length
*/

int _length(unsigned long int n)
{
	int length = 0;

	while (n > 0)
	{
		length++;
		n >>= 1;
	}

	length--;

	return (length);
}

/**
 * print_binary - converts a decimal to binary
 *
 * @n: decimal number to convert
 *
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int length;
	unsigned long int ma = 1;

	length = _length(n);

	if (length > 0)
		ma <<= length;

	while (ma > 0)
	{
		if (n & ma)
			_putchar('1');
		else
			_putchar('0');

		ma >>= 1;
	}
}
