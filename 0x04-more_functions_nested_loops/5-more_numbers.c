#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *                with newline
 * Return: return 0
 */

void more_numbers(void)
{
	int nt, i;

	for (nt = 0; nt < 10; nt++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
				_putchar((i % 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
