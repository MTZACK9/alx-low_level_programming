#include <stdio.h>
#include <stdlib.h>

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
