#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of argument passed
 * @argc: argument counter
 * @argv: pointer to array of argument
 * Return: return 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
