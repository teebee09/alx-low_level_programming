#include "main.h"
#include <stdlib.h>

/**
 * array_range - fncs that creates an array of integers
 * @min: start of range
 * @max: end of range
 * Return: pointer to an array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int num = (max - min + 1);

	if (min > max) /* validate input */
		return (NULL);

	/* malloc and check for error */
	ptr = malloc(sizeof(int) * num);
	if (ptr == NULL)
		return (NULL);

	/* set values */
	for (i = 0; i < num; i++)
		ptr[i] = min++;

	return (ptr);
}
