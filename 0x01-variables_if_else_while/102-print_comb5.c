#include <stdio.h>

/**
 * main - print num in pair frm 00-99 num no repeat 00 01, 00 02, 00 03...
 * Return: return 0
 */

int main(void)
{
	int units;
	int tens;
	int a, b, c, d;

	a = b = c = d = 48;
	while (d < 58)
	{
		c = 48;
		while (c < 58)
		{
			b = 48;
			while (b < 58)
			{
				a = 48;
				while (a < 58)
				{
					units = (d * 10) + c;
					tens = (b * 10) + a;
					if (units < tens)
					{
						putchar(d);
						putchar(c);
						putchar(' ');
						putchar(b);
						putchar(a);
						if (d == 57 && c == 57 && b == 57 && a == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					a++;
				}
				b++;
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
