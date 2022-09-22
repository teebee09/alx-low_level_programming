#include "main.h"

/**
 * string_toupper - fncs that changes all lowercase letter to uppercase
 * @s: string to check
 * Return: return s
 */

char *string_toupper(char *s)
{
	int i = 0;

	/* iterate loop until */
	/* until the end of the string */
	while (s[i] != '\0')
	{
		/* if character is in lowercase */
		/* then subtract 32 */
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		/* increase iterator variable */
		i++;
	}
	return (s);
}
