#include <stdlib.h>
#include "dog.h"


/**
 * _strlen - length of string.
 *
 * @str: the string.
 *
 * Return: length.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcpy - return copy pf str.
 *
 * @src: source string.
 * @dest: copy of the string.
 *
 * Return:@dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog.
 *
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: the dog owner.
 *
 * Return: NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = (dog_t *) malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	newDog->name = _strcpy(newDog->name, name);
	newDog->age = age;
	newDog->owner = _strcpy(newDog->owner, owner);

	return (newDog);

}
