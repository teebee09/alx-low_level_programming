#include "main.h"

/**
 * print_numbers - Function that prints numbers from 0-9, new line
 * Return: return 0
 */

void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
