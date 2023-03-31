#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @str: pointer to char input array
 *
 * Return: Capitalized string.
*/

char *cap_string(char *str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (i == 0 || isspace(str[i - 1]) || strchr(",;.!?\"(){} ", str[i - 1]))
		{
			str[i] = toupper(str[i]);
		}
	}

	return (str);
}
