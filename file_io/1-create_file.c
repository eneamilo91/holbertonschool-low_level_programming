#include"main.h"
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
/**
 * create_file -creates a file
 * @filename: - points to the specific filename
 * @text_content: -holds value for output
 * Return: (1)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int size;
	int written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		size = strlen(text_content);
		written = write(fd, text_content, size);
	}

	if (written == -1)
		return (-1);

	close(fd);
	return (1);
}
