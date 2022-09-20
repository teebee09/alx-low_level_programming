#include "main.h"

/**
 * print_rev - funcs that prints a string in reverse with newline
 * @s: string in reverse
 * Return: return void
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	/* to find the length of string,point to last char*/
	while (*s != '\0')
	{
		len++;
		++s;
	}

	/* go back to character before null character */
	s--;

	/* print string in reverse */
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
