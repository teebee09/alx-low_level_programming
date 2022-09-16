#include <stdio.o>

/**
 * main - print number 1-100, FizzBuzz for multiple of 3&5
 * Return: return 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
