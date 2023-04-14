#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - function that reallocates a memory block using malloc and free.
 *
 * @ptr:  pointer to the memory previously.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the  new size, in bytes of the new memory block.
 *
 * Return: the new pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr, *tmp_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);
	}

	new_ptr == malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	tmp_ptr = ptr;

	for (i = 0; i < old_size; i++)
		new_ptr[i] = tmp_ptr[i];

	free(ptr);

	return (new_ptr);
}
