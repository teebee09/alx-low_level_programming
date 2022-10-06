#include "main.h"
#include <stdio.h>

/**
 * main - program prints all argument it receives
 * @argc: argument counter
 * @argv: pointer to array of argument
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
