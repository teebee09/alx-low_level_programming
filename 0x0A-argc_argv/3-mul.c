#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument couter
 * @argv: array that contains the program command line arguments
 * Return: return 0, 1 if two argument not given
 */

int main(int argc, char *argv[])
{
	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* multiply two arguments passed via cmd line */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
