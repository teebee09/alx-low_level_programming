#include <stdio.h>

/**
 * main - print lower and upper case alphabet
 * Return: return 0
 */

int main(void)
{
	char lowerCase = 'a';
	char upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}

	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}
	putchar('\n');

	return (0);
}
