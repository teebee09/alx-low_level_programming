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
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
