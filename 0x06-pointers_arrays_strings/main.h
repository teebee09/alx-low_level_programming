#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Tijani H. Tijani
 * Desc: Header file containing prototype for all function
 *       used in the 0x06-pointers_arrays_strings directory.
 */

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);


#endif /* MAIN_H */
