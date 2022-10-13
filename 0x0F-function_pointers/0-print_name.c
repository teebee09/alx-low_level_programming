#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function to print a name
 * @name: name to print
 * @f: pointer to the function that prints a name
 * Return: return void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
