#include <stdio.h>

/**
 * main - program that prints numb diff combinations of 3 digits
 * Return: return 0
 */

int main(void)
{
	int units;
	int tens;
	int hundreds;

	for (units = '0'; units <= '9'; units++)
	{
		for (tens = (units + 1); tens <= '9'; tens++)
		{
			for (hundreds = (tens + 1); hundreds <= '9'; hundreds++)
			{
				putchar(units);
				putchar(tens);
				putchar(hundreds);
				if (units != '7' || tens != '8' || hundreds != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
