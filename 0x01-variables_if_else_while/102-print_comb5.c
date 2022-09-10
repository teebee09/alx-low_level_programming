#include <stdio.h>

/**
 * main - print num in pair frm 00-99 num no repeat 00 01, 00 02, 00 03...
 * Return: return 0
 */

int main(void)
{
	int units;
	int tens;

	for (units = 0; units <= 98; units++)
	{
		for (tens = units + 1; tens <= 99; tens++)
		{
			putchar((units / 10) + '0');
			putchar((units % 10) + '0');
			putchar(' ');
			putchar((tens / 10) + '0');
			putchar((tens % 10) + '0');

			if (units == 98 && tens == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
