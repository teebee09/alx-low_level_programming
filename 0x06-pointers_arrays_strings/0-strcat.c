#include "main.h"

/**
 * *_strcat - Function that concatenates two strings
 * @dest: character array to check
 * @src: character array to check
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		++i;

	while (src[j] != '\0')
	{
		++j;
		++i;
	}
	dest[i] = '\0';

	return (dest);
}
