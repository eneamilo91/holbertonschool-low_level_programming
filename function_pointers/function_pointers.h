#include<stddef.h>
#ifndef MY_HEADER_H
#define MY_HEADER_H

void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
