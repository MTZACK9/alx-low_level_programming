#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14.
 */

void more_numbers(void)
{
	int i, j, f;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			f = j;
			if (j > 9)
			{
				_putchar(1 + '0');
				f = j % 10;
			}
			_putchar(f + '0');
		}
		_putchar('\n');
	}
}
