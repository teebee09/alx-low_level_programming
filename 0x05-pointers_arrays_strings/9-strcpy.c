#include "main.h"

/**
 * _strcpy - copy string src into string buffer dest
 * @dest: string buffer
 * @src: String source to be copied
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
