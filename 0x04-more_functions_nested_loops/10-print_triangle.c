#include "main.h"

/**
 * print_triangle - Function that prints a triangle, newline
 * @size: integer to check
 * Return: return 0
 */

void print_triangle(int size)
{
	int height;
	int width;
	int times;

	if (size <= 0)
		_putchar('\n');

	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= size - height; width++)
		{
			_putchar(' ');

			for (times = 1; times <= height; times++)
			{
				_putchar('#');
			}

		}
		_putchar('\n');
	}
}
