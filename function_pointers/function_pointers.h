#ifndef MY_HEADER_H
#define MY_HEADER_H

void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
#endif
