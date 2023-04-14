#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if digits.
 *
 * @str: input to check.
 *
 * Return: 1 if digit, 0 otherwise.
 */

int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - multiplies to digits.
 *
 * @s1: first digit.
 * @s2: second digit.
 *
 * Return: pointer to result.
 */

char *multiply(char *s1, char *s2)
{
	int len1, len2, i, j, k, carry, product;
	char *result;

	len1 = 0;
	len2 = 0;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	result = calloc(len1 + len2 + 1, sizeof(char));

	if (!result)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2; j >= 0; j--)
		{
			product = (s1[i] - '0') * (s2[j] - '0') + carry + result[i + j + 1];
			carry = product / 10;
			result[i + j + 1] = product % 10;
		}

		result[i + j + 1] = carry;
	}

	for (k = 0; k < len1 + len2; k++)
		result[k] += '0';

	for (k = 0; result[k] == '0'; k++)
		;
	if (k == len1 + len2)
		k--;
	for (i = 0; i < len1 + len2 - k; i++)
		result[i] = result[k + i];
	return (result);

}

/**
 * main - multiplies two numbers.
 *
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 *
 * Return: 0 if success, 98 if incorrect.
 */

int main(int argc, char **argv)
{
	char *s1, *s2, *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	s1 = argv[1];
	s2 = argv[2];

	result = multiply(s1, s2);

	if (!result)
		return (98);

	printf("%s\n", result);
	free(result);

	return (0);
}
