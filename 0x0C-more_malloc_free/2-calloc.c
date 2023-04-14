#include <stdio.h>
#include <stdlib.h>

/**
 * memset - fills memory with a constant byte
 *
 * @s: input pointer that represents memory.
 * @b: characters to fill
 * @n: number of bytes to be filled
 *
 * Return: A pointer to the filled memory area
*/

char *memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * *_calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: the number of elements.
 * @size: size.
 *
 * Return: void.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total_size);

	return (ptr);
}
