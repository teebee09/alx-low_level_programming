#include <unistd.h>

/**
 * _putchar - fncs that prints the character of a string
 * @c: character to check
 * Return: return 1 On success
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
