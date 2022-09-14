#include "main.h"

/**
 * print_alphabet - Fns that prints lowercase alphabets with new line
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
