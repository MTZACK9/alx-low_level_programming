#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 *
 * Return: pointer which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 * and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	concat_str = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	strcpy(concat_str, s1);
	strcat(concat_str, s2);
	return (concat_str);
}
