#include "main.h"

/**
 * reverse_array - fncs that reverses the content of an array of int
 * @a: array of numbers int
 * @n: number of element in array
 * Return: return 0
 */

void reverse_array(int *a, int n)
{
	int temp; /* temporary variable*/
	int index = 0; /* index of the array count*/
	int end = n - 1; /* omit null terminator in length*/

	while (index < end)
	{
		temp = *(a + index);
		*(a + index) = *(a + end);
		*(a + end) = temp;
		index++, end--;
	}
}
