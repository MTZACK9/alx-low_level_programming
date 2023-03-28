#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string.
 *
 * @str: string input parameter
 */

void puts_half(char *str)
{
	int len = strlen(str);

	int n;

	if (len % 2 == 0)
	{
		for (n = len / 2; str[n] != '\0'; ++n)
		{
			_putchar(str[n]);
		}
	} else
	{
		for (n = ((len - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
