#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: return the converted string
 *    0 if there is one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;
	unsigned int len = 1;

	if (!b)
		return (0);

	while (b[i])
		i++;
	i--;

	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += len;
		i--;
		len += len;
	}
	return (sum);
}

