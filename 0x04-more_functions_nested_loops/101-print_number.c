#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer to check
 * Return: return 0
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('_');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);


	_putchar((num % 10) + '0');
}
