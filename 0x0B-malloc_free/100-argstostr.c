#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - fncs to detemine the length of string
 * @str: string to check
 * Return: return length
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
		length++, str++;

	return (length);
}


/**
 * argstostr - fncs that concatenate all the argeuments in your program
 * @ac: the number of arguments passed in the program
 * @av: an array of pointer to the argument.
 * Return: NULL if ac == 0 or av == NULL or function fails,
 *         otherwise, return pointer to new string.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int length = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)/* validate input */
		return (NULL);

	/* find length of malloc */
	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]);
	}
	length += (ac + 1);/* add space for \n and \0 */

	/* allocate memory and free if error */
	str = malloc(length * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	/* insert each arg into *str */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	return (str);
}


