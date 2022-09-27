#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - fns that prints the sum of two diagonal of a square matrix
 * @a: Square matrix
 * @size: size of array
 * Return: return void
 */

void print_diagsums(int *a, int size)
{
	int diagonal_sum1 = 0;
	int diagonal_sum2 = 0;

	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagonal_sum1 += a[i];
	}
	for (row = 0; row <= size; row++)
	{
		i = (row * size) - row;
		diagonal_sum2 += a[i];
	}

	printf("%d, %d\n", diagonal_sum1, diagonal_sum2);
}
