#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Hexadecimal
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		putchar(n + '0');
	}
	char ch = 'a';

	for (; ch <= 'c'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
