#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Fns that prints all natural number from 0 to 98
 * @n: integer argument
 * Return: return 0
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
