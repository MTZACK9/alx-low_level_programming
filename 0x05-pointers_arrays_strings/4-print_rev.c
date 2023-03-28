#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 *
 * @s: string input parameter.
 */

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
	++end;
	}
	--end;
	while (end >= s)
	{
	putchar(*end);
	--end;
	}
	putchar('\n');


}
