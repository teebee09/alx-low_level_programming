#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: string
 * Return: return length
 */

void rev_string(char *s)
{
	int i = 0, len = 0;
	char temp;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
