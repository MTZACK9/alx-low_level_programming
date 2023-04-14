#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - function that concatenates two strings.
 *
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 * @n: length of s2.
 *
 * Return: pointer shall point to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc(len1 + n + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		result[i] = s1[i];

	for (i = 0; i < n; i++)
		result[i + len1] = s2[i];

	result[len1 + n] = '\0';

	return (result);
}
