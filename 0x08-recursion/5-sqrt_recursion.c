#include "main.h"

/**
 * find_sqroot - fns to find square root of n, starting from zero
 * @num: number to check
 * @root: root to test
 * Return: return square root or -1 if not natural sqrroot
 */

int find_sqroot(int num, int root)
{
	if (root * root > num)
		return (-1);

	if (root * root == num)
		return (root);

	return (find_sqroot(num, root + 1));
}

/**
 * _sqrt_recursion -fns that returns the natural squareroot of number
 * @n: integer to check
 * Return: return square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqroot(n, 0));
}
