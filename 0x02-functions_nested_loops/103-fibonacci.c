#include <stdio.h>

/**
 * main - fibonacci sequence and sum of even numbers below 4000000
 * Return: return 0
 */

int main(void)
{
	int sum_of_even_no = 0;
	int a;
	int b;
	int add = 1;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		add = a + b;
		a = b;
		b = add;
		if ((add <= 4000000) && (add % 2 == 0))
		{
			sum_of_even_no += add;
		}
	}
	printf("%d\n", sum_of_even_no);

	return (0);

}
