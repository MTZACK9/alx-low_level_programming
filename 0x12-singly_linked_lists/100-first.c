#include <stdio.h>

/**
 * before - function that runs before main.
 *
 * Return: void.
 */

void __attribute__ ((constructor)) before()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
