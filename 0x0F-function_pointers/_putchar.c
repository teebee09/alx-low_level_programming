#include <unistd.h>

/**
 * _putchar - fncs that prints the character of a string
 * @c: the character to check
 * Return: return 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
