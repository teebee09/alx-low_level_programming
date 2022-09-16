#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: integer to check
 *
 */

void print_line(int n)
{
	int times;

	if (n > 0)
	{
		for (times = 0; times < n; times++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
