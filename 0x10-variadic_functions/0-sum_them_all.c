#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - fncs that returns the sum of all its parameters
 * @n: integer or number of parameter passed to the function
 * @...: A variable number of paramters to calculate the sum of
 * Return: return 0,if n is 0, otherwise return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums; /* nums rep valist */
	unsigned int i, sum = 0;

	/* validate valist and initialise */
	if (n == 0)
		return (0);
	va_start(nums, n);

	/* iterate through list, update sum, free list */
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
