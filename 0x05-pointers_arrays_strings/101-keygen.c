#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8
/**
 * main - Entry point
 *
 * Description: program that generates random valid passwords.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	char password[PASSWORD_LENGTH + 1];

	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+";
	
	const int charset_size = sizeof(charset) - 1;

	srand(time(NULL));


	for  (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % charset_size];
	}

	password[PASSWORD_LENGTH] = '\0';

	/*printf("%s\n", password);*/
	printf("Tada! Congrats\n");

	return (0);
}
