#include <unistd.h>

/**
 * _putchar - fncs that prints the charater of a string
 * @c: character to check
 * Return: return 1 on Success
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
