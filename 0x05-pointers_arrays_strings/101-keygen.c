#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 61
#define CHARACTERS "!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~"

/**
 * main - Generates a random valid password for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1] = {0};
	int i, index;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
    	{
		index = rand() % sizeof(CHARACTERS);
		password[i] = CHARACTERS[index];
	}

	printf("%s", password);

	return (0);
}
