
#include "main.h"

/**
 * _atoi - converts chars to integer
 *
 * @ch: char to convert
 *
 * Return: converted integer
*/

unsigned int _atoi(char ch)
{
	return ((unsigned int) ch - '0');
}

/**
 * _strlen - gets the length of a string
 *
 * @str: string input
 *
 * Return: string length
*/

unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * binary_to_uint - converts a binary number
 *  to an unsigned int
 *
 * @b: string;
 *
 * Return: converted number.
*/

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int res = 0, base2 = 1, num = 0;

	/*if (b == NULL)
		return (0);*/

	for (index = _strlen(b) - 1; index >= 0; index--)
	{
		num = _atoi(b[index]);

		if (num != 0 && num != 1)
			return (0);

		res += num * base2;
		base2 *= 2;
	}
	return (res);
}
