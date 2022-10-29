#include "main.h"

/**
 * print_binary - fncs that prints the binary representation of a number
 * @n: integer to print in binary
 * Return: return void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
