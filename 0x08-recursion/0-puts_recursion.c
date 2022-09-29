#include "main.h"

/**
 * _puts_recursion - fns that prints a string with newline
 * @s: character of strings to check
 * Return: return void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
