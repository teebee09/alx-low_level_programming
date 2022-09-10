#include <stdio.h>

/**
 * main - print lowercase alphabets
 * Return: return 0
 */

int main(void)
{
	char lalpha = 'a';

	while (lalpha <= 'z')
	{
		putchar(lalpha);
		lalpha++;
	}
	putchar('\n');

	return (0);
}
