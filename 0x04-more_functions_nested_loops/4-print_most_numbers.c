#include "main.h"

/**
 * print_most_numbers - function that prints the numbers,from 0 to 9
 *                      with newline, do not print 2 and 4
 * Return: return 0
 */

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
