#include"main.h"
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
/**
* append_text_to_file -appends text to file
* @filename: -points to specific filename
* @text_content: -append specific string
* Return: (1)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int size;
	int written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		size = strlen(text_content);
		written = write(fd, text_content, size);
	}

	if (written < 0)
		return (-1);


	close(fd);
	return (1);
}
