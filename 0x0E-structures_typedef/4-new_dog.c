#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - fncs to get the length of string
 * @s: the string to check/count
 * Return: returns length
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	return (len);
}

/**
 * _strcpy - Copies a string pointed to by src, including the
 *         terminating null byte, to a buffer pointed to by dest.
 * @dest: destination to copy into, store string
 * @src: source to copy string from
 * Return: return pointer dest
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
 * new_dog - fncs to create a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: return new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
		return (NULL);

	bingo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bingo->name == NULL)
	{
		free(bingo);
		return (NULL);
	}

	bingo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bingo->owner == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}

	bingo->name = _strcpy(bingo->name, name);
	bingo->age = age;
	bingo->owner = _strcpy(bingo->owner, owner);

	return (bingo);
}





























