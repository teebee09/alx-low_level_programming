#include "main.h"

/**
 * _pow_recursion - fns that returns the value of x to power y
 * @x: integer to check
 * @y: integer power to check or exponent
 * Return: return x^y or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
