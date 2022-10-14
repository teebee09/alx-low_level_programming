#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - fncs that prints a string with a newline
 * @separator: the string to be printed btwn the string
 * @n: number of string passed to the function
 * @...: variable number of numbers to br printed
 * Return: return void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
