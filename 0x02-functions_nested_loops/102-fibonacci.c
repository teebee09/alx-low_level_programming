#include <stdio.h>

/**
 * main - program that prints first 50 fibonacci number, including 1&2
 * Return: 0;
 */

int main(void)
{
	int count;
	int range;
	long num1 = 1;
	long num2 = 2;

	printf("%ld, %ld", num1, num2);

	for (count = 0; count < 48; count++)
	{
		range = num1 + num2;
		printf(", %ld", range);
		num1 = num2;
		num2 = range;
	}
	printf('\n');

	return (0);
}
