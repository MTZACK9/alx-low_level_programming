#include <ctype.h>
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @str: string input.
 *
 * Return: Uppercase string.
 */

char *string_toupper(char *)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if(islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
