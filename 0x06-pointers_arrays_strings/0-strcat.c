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
		i++;

	while (src[j] != '\0')
	{
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * char dest[];
 * char src[];
 * int i, j;
 *
 * This loop is to store the length of dest in i
 * It just counts the number of characters in dest
 * You can also use strlen instead of this.
 *
 * for (i = 0; dest[i] != '\0'; ++i);
 *
 * This loop would concatenate the string dest at
 * the end of dest
 *
 * for (j = 0; src[i] != '\0'; ++j; ++i)
 * {
 * dest[i] = src[j];
 * }
 * \0 represents end of string
 * dest = '\0';
 * return (dest);
*/

