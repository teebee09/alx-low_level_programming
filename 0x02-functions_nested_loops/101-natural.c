#include "main.h"
#include <stdio.h>

/**
 * main - printand sum the multiples of 3&5 below 1024
 * Return: return 0
 */

int main(void)
{
	int n;
	int add;

	add = 0;

	for (n = 0; n <= 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			add += n;
		}
	}
	printf("%d\n", add);

	return (0);
}
