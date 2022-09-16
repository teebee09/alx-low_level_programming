#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: integer at check
 * Return: return 0
 */

void print_diagonal(int n)
{
	int times, space;

	if (n > 0)
	{
		for (times = 1; times <= n; times++)
		{
			for (space = 1; space < times; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
