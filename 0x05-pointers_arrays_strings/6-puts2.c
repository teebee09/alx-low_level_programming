#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: return length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * puts2 - fncs that prints every character of a string
 * starting with the first character, with a new line
 * @str: string to check
 * Return: return void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
