#include <stdio.h>

/**
 * main - print alphabet in reverse
 * Return: return 0
 */

int main(void)
{
	char lalpha = 'z';

	while (lalpha >= 'a')
	{
		putchar(lalpha);
		lalpha--;
	}
	putchar('\n');

	return (0);
}
