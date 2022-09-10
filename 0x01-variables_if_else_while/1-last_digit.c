#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the last digit of the number stored in the variable n
 * Return: return 0
 */

int main(void)

{

		int n, a;



		srand(time(0));

		n = rand() - RAND_MAX / 2;

		a = n % 10;
		printf("The Last digit of %i is %i and is ", n, a);

		if (a > 5)
		{
			printf("greater than 5\n");
		}
		else if (a == 0)
		{
			printf("0\n");
		}
		else
		{
			printf("less than 6 and not 0\n");
		}

		return (0);

}
