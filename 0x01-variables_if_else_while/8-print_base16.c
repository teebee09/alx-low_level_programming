#include <stdio.h>

/**
 * main - prints hexadecimal base 0123456789abcdef, using putchar
 * Return: return 0
 */

int main(void)
{
	int n = '0';
	int a_f = 'a';

	while (n <= '9')/*print 0-9 */
	{
		putchar(n);
		n++;
	}

	while (a_f <= 'f')/*print hexadecimal a-f*/
	{
		putchar(a_f);
		a_f++;
	}
	putchar('\n');

	return (0);
}
