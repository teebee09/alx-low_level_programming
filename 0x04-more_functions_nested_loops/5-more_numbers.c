#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *                with newline
 * Return: return 0
 */

void more_numbers(void)
{
	int n = 0;
	char i;

	while (n < 10)
	{
		for (i = '0'; i <= '14'; i++)
		{
			_putchar(i);
		}
		n++;
	}
	_putchar('\n');
}
