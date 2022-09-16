#include "main.h"

/**
 * print_triangle - Function that prints a triangle, newline
 * @size: integer to check
 * Return: return 0
 */

void print_triangle(int size)
{
	int index;
	int times;

	if (size <= 0)
	{
		for (times = 1; times <= size; times++)
		{
			for (index = size - times; index > 0; index++)
				_putchar(' ');

			for (index = 0; index < times; index++)
				_putchar('#');

			if (times == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
