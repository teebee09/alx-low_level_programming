#include "main.h"

/**
 * main - Fns that prints lowercase alphabets
 * Return: return 0
 */

void print_alphabet(void)
{
	char lalpha = 'a';

	while (lalpha <= 'z')
	{
		_putchar(lalpha);
		lalpha++;
	}
	_putchar('\n');
}
