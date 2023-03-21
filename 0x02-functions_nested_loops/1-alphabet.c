#include "main.h"

/**
 * main - Entry point
 *
 * Description:  prints the alphabet, in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
