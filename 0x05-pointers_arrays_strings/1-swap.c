#include "main.h"

/**
 * swap_int - Function that swap values of two integer
 * @a: pointer integer to check
 * @b: pointer integer to check
 * Return: return 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
