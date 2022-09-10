#include <stdio.h>

/**
 * main - print alphabets without q and e
 * Return: return 0
 */

int main(void)
{
	char lalpha = 'a';

	while (lalpha <= 'z')
	{
		if (lalpha != 'q' && lalpha != 'e')
		{
			putchar(lalpha);
		}
		lalpha++;
	}
	putchar('\n');

	return (0);
}
