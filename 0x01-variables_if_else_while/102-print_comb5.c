#include <stdio.h>

/**
 * main - print num in pair frm 00-99 num no repeat 00 01, 00 02, 00 03...
 * Return: return 0
 */

int main(void)
{
	int units;
	int tens;
	int u;
	int t;

	for (units = '0'; units <= '9'; units++) /*print first two digit combo*/
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (u = units; u <= '9'; u++) /*print second of pair*/
			{
				for (t = tens + 1; t <= '9'; t++)
				{
					putchar(units);
					putchar(tens);
					putchar(' ');
					putchar(u);
					putchar(t);

					if (!((units == '9' && tens == '8') && (u == '9' && t == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				u = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
