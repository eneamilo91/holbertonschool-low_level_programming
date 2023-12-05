#include"main.h"
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
/**
* read_textfile -read text and prints it to stdout
* @filename: -points to the name of the file
* @letters: -holds the value for output
* Return: (written)
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readed;
	ssize_t written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	readed = read(fd, buffer, letters);
	written = write(1, buffer, readed);
	if (readed == -1 && written != readed)
		return (0);

	close(fd);
	free(buffer);
	return (written);
}
