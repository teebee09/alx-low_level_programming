#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * File: function_pointers.h
 * Auth: Tijani H. Oluwatobiloba
 * Desc: Header file that contains all prototype function
 *      used in 0x0F-function_pointers directory.
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif
