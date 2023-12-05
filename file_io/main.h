#ifndef FILENAME_H
#define FILENAME_H

#include<stddef.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void closefd(int fd1, int fd2);
int main(int argc, char *argv[]);


#endif
