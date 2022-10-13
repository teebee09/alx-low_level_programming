#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: no of elements in the array
 * @cmp: the pointer to the function to execute or compare value
 * Return: return index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* iterate thru array and call searching function */
	for (i = 0; i < size; i++)
		if (cmp(array[i]))/* if returned true */
			return (i);

	return (-1);
}
