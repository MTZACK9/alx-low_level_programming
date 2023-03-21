#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	char al = 'a';

	int i = 0;

	while (i <= 9)
	{
		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}
		_putchar('\n');
		i++;
	}
}
