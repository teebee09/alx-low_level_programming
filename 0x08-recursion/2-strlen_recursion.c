#include "main.h"

/**
 * _strlen_recursion - fns that prints the length of a string
 * @s: string to check
 * Return: return 0;
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}

