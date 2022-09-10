#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: return 0
 */

int main(void)
{
	int units;
	int tens;

	for (units = '0'; units <= '9'; units++)/* increment of units */
	{
		for (tens = (uints + 1); tens <= '9'; tens++)/* increment oftens*/
		{
			putchar(units);
			putchar(tens);
			if (units != '8' || tens != '9')/* print commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
