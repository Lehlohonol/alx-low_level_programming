#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *argstostr(int ac, char **av);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);

#endif /* MAIN_H */
