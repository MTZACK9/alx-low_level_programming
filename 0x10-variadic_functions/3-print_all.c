#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 *
 * @format: A string of character representing
 *          the argument types
 *
 * Description: If any argument not of type char,
 *              int, float or char * is ignored
 *
 * Return: nothing
*/


void print_all(const char * const format, ...)
{
	va_list args;
	char *sep;
	int i;
	char *s;

	va_start(args, format);

	i = 0;
	sep = "";

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("%s(nil)", sep);
				}
				else
				{
					printf("%s%s", sep, s);
				}
				break;
			default:
				break;
		}
		sep = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}

