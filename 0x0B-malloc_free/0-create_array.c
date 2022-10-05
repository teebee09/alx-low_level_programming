#include "main.h"
#include <stdlib.h>

/**
 * create_array - fns that creates an array of char and
 *                initializes with a specific char.
 * @size: the size of the array to be initialized.
 * @c: specific char to initiialize with.
 * Return: Null if size is 0
 *         return pointer to array or NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
