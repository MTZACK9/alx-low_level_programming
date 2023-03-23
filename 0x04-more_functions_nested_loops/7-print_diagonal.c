#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: the number of \ charcter
 */

void print_diagonal(int n)
{
	int pon, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pon = 1; pon <= n; pon++)
		{
			for (space = 1; space <= pon; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
