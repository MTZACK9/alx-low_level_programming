/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: pointer to string.
 * @accept: set of characters that need to be found un @s.
 *
 * Return: pointer to the byte in @s that matches one of the bytes in @accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return (NULL);
}
