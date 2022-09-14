#include "main.h"

/**
 * jack_bauer - Fns that prints every mins of jack Bauer's Day
 * Desc: minutes starting from 00:00 to 23:59
 * Return: return 0
 */

void jack_bauer(void)
{
	int mins = 0;
	int hours = 0;

	while (hours < 24)
	{
		while (mins < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			_putchar('\n');
			mins++;
		}
		mins = 0;
		hours++;
	}
}
