#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - function that concatenates all
 * the arguments of your program.
 *
 * @ac: ac;
 * @av: av;
 *
 * Return: NULL if ac == 0 or av == NULL
 * pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, len, pos;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	pos = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(str + pos, av[i]);
		pos += strlen(av[i]);
		str[pos] = '\n';
		pos++;
	}
	str[pos - 1] = '\0';

	return (str);
}
