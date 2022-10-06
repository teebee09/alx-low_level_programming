#include "main.h"
#include <stdio.h>

/**
 * main - fns that prints name of program
 * @argc: argument counter
 * @argv: pointer to the array argument
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
