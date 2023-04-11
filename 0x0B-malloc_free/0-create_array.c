#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of arr.
 * @c: character.
 *
 * Return: pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);

	char *arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
