#include "main.h"

/**
 * print_name - prints a name.
 *
 * @name: pointer to nale string.
 * @f: function pointer that returns nothing.
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
