#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string, in reverse.
 *
 * @s: string input parameter.
 */

void print_rev(char *s)
{
	int len = strlen(s);

	int i;

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	printf("%s\n",s);


}
