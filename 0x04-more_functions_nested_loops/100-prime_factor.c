#include <stdio.h>

/**
 * main - print largest prime factor of the number 612852475143
 * Return: return 0
 */

int main(void)
{
	long int n, pf;

	n = 612852475143;

	for (pf = 2; pf <= n; pf++)
	{
		if (n % pf == 0)
		{
			n /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
