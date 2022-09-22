#include "main.h"

/**
 * _strcmp - function that can compare two strings
 * @s1: Destination string to be compared
 * @s2: source string to compare
 * Return: int that will tell the number of space
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
	{
		return (*(s1 + i) - *(s2 + i));
	}
	else
		return (0);
}

/**
 * Return: If str1 < str2, the negative diff of the first unmatched char.
 *         If str1 == str2, 0.
 *         If str1 > str2, the positive diff of the first unmatched char.
 *
 *
 * while (*s1 && *s2 && *s1 == *s2)
 * {
 * s1++;
 * s2++;
 * }
 * return (*s1 - *s2);
 */
