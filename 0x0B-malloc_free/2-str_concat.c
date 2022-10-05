#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenate two strings
 * @s1: stringone to be check/concatenated upon
 * @s2: stringtwo to be check/concatenated to s1
 * Return: NULL if Concatenation fails
 *         return pointer to a newly allocated space in memory
 *         containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i;
	int concat_i = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	concat_str = malloc(sizeof(char) * length);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] == s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] == s2[i];

	return (concat_str);
}
