#include "main.h"

/**
 * substring_match - check if a string substring after wildcard matches 1
 * @s1: string to check
 * @s2: string to check
 * @after_wildcard: place holder for position right after wild card
 * Return: 1 if matched 0 otherwise
 */

int substring_match(char *s1, char *s2, char *after_wildcard)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (substring_match(s1 + 1, s2 + 1, after_wildcard));
	else
		return (substring_match(s1 + 1, after_wildcard, after_wildcard));
}

/**
 * wildcmp - fns that compares two strings and return 1 if identical
 * @s1: Destination string to compare
 * @s2: source string to compare
 * Return: 1 if identical or 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (substring_match(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
