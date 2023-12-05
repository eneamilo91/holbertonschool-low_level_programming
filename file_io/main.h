#ifndef FILENAME_H
#define FILENAME_H

#include<stddef.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);


#endif
