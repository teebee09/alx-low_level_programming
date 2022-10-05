#include "main.h"
#include <stdlib.h>

/**
 * _strdup - fncs that returns a pointer to a newly allocated
 *          space in memory,wch contains a copy of string given as parameter
 * @str: string to check/duplicate
 * Return: NULL if str is NULL
 *         On Success, returns pointer to duplicate string
 *         NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;

	duplicate_str = malloc(sizeof(char) * (length + 1));

	if (duplicate_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate_str[i] = str[i];

	duplicate_str[length] = '\0';

	return (duplicate_str);
}
