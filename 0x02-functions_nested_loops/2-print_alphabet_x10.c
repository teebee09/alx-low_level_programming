#include "main.h"

/**
 * print_alphabet_x10 - Fns that prints alphabets 10 times
 * Return: return 0
 *
 */

void print_alphabet_x10(void)
{
	char lalpha;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (lalpha = 'a'; lalpha <= 'z'; lalpha++)
		{
			_putchar(lalpha);
		}
		_putchar('\n');
	}
}
