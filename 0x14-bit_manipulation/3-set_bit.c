#include "main.h"

/**
 * set_bit - fncs that sets the value of a bit to 1 at a given index
 * @n: integer number to check
 * @index:  is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > (sizeof((*n)) * 8))
		return (-1);

	*n = *n | mask;
	return (1);
}
