#include <stdio.h>

/**
 * main - program that prints first 50 fibonacci number, including 1&2
 * Return: 0;
 */

int main(void)
{
	int count;
	int range = 50;
	long num1 = 1;
	long num2 = 2;

	for (count = 0; count <= (range / 2); count++)
	{
		printf("%li %li", num1, num2);
		num1 += num2;
		num2 += num1;
	}
	if (range % 2 == 1)
	{
		printf("%li", num1);
	}
	printf('\n');

	return (0);
}
