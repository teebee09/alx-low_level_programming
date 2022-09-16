#include "main.h"

/**
 * print_triangle - Function that prints a triangle, newline
 * @size: number of lines
 * Return: return none
 */

void print_triangle(int size)
{
	int index;
	int times;

	for (index = 0; index < size; index++)
	{
		for (times = 1; times < (size - index); times++)
			_putchar(' ');
		for (times--; times < size; times++)
			_putchar(35);
		if (index < (size - 1))
			_putchar('\n');
	}

	_putchar('\n');
}
