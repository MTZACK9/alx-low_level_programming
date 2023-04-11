#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the number of arguments passed into it.
 *
 * @argc: holds the number of arguments passed.
 * @argv: array pointer that holds the arguments passed.
 *
 * Return: Always 0 (Success)
*/

int main(int __attribute__((unused)) argc, int *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
