#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
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
 * puts_half - fncs that prints half of a string
 * function will print second half
 * @str: string to check
 * Return: return string
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);

	/* find the index character depending on even/odd */
	if (len % 2 != 0)
		i = (len / 2) + 1;
	else
		i = (len / 2);

	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
