#include "main.h"

/**
 * get_bit - gets a bit at a given index
 *
 * @n: decimal value
 * @index: integer value of bit position
 *        to get from @n
 *
 * Return: the value of the bit or -1 if an
 *          error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1UL << index;

	return ((n & mask) != 0);

}
