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
	int i = 0, j = 0;
	int length1 = 0, length2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + 1))
		length1++, i++;

	while (*(s2 + 1))
		length2++, j++;
	length2++; /* add null terminator to length */

	concat_str = malloc(sizeof(char) * (length1 + length2));/* alloc memory */

	if (concat_str == NULL)/* validate memory */
		return (NULL);

	i = 0, j = 0;
	while (i < length1)
	{
		*(concat_str + i) = *(s1 + i);
		i++;
	}
	while (j < length2)
	{
		*(concat_str + i) = *(s2 + j);
		i++, j++;
	}

	return (concat_str);
}


