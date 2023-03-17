#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: combinations of single-digit numbers.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

