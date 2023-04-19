#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: pointer to array
 * @size: size of @array
 * @cmp: pointer to function call to check index in array
 *
 * Return: integer.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool check;

	if (size <= 0)
		return (-1);

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			check = cmp(array[i]);
			if (check == TRUE)
				return (i);
		}
	}
	return (-1);
}
