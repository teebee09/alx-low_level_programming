#include "main.h"

/**
 * find_prime - recursively devide by higher divisor,skip the even num
 * @num: number to check
 * @divisor: divisor
 * Return: 1 if primeno, 0 if not
 */

int find_prime(int num, int divisor)
{
	if (num <= 1 || num % divisor == 0)
		return (0);
	else if (num == divisor)
		return (1);
	else if (num > divisor)
		find_prime(num, divisor + 1);

	return (1);
}

/**
 * is_prime_number - fns that returns 1 if integer is a prime number
 * @n: number to check
 * Return: return 1 or 0 if its not an integer
 */

int is_prime_number(int n)
{
	return (find_prime(n, 2));
}
