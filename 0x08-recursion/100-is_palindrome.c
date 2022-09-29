#include "main.h"

/**
 * _strlen - returns length of string
 * @str: string to check
 * Return: return length of str
 */

int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(str + 1));
	}
}

/**
 * check_palindrome - check to see is a string is a palindrome
 * @l: left hand index
 * @r: right hand index
 * @p: possible palindrome
 * Return: 1 if palindrome 0 if not
 */

int check_palindrome(int l, int r, char *p)
{
	if (l >= r)
	{
		return (1);
	}
	else if (p[l] != p[r])
	{
		return (0);
	}
	else
	{
		return (check_palindrome(l + 1, r - 1, p));
	}
}

/**
 * is_palindrome - fns that checks if a string is a palindrome
 * @s: string to check
 * Return: return 1 if it is a palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (is_palindrome(0, i, s));
}






