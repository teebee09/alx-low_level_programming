#include <unistd.h>

/**
 * _putchar - fncs that prints character to stdout
 * @c: character to check
 * Return: 1 On Success, - 1 onerror
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
