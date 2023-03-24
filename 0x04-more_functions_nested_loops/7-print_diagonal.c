#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n : number
*/

void print_diagonal(int n)
{
	int dr, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (dr = 1; dr <= n; dr++)
		{
			for (space = 1; space < dr; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
