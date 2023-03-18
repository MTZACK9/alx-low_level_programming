#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Do what you do better... and: do more of what you do...
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int d1, d2, d3;

	for (d1 = 0; d1 <= 7; d1++)
	{
		for (d2 = 1; d2 <= 8; d2++)
		{
			for (d3 = 2; d3 <= 9; d3++)
			{
				if (d1 < d2 && d2 < d3)
				{
					putchar(d1 + '0');
					putchar(d2 + '0');
					putchar(d3 + '0');
					if (d1 != 7 || d2 != 8 || d3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
