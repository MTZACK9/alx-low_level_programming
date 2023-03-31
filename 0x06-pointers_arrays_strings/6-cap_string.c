#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @s: pointer to char input array
 *
 * Return: Capitalized string.
*/

char *cap_string(char *s)
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (i == 0 || isspace(s[i - 1]) || strchr(",;.!?\"(){} ", s[i - 1]))
		{
			s[i] = toupper(s[i]);
		}
	}

	return (s);
}
