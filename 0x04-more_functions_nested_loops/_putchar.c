#include <unistd.h>

/**
 * _putchar - function defines a character
 * @c: character to print
 * Return: return 1
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
