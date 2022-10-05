#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Tijani H. Oluwatobiloba
 * Desc: This file contains all functions used by the
 *       0x0B-malloc_free directory.
 */

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);


#endif /* MAIN_H */
