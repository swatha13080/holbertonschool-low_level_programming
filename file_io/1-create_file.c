#include "main.h"

/**
 * create_file - creates a file with 600 or existing permissions if file exists
 * truncates the file if already exists
 * creates empty file if text_content is null
 * @filename: name of file to create
 * @text_content: null terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wbytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	wbytes = write(fd, text_content, strlen(text_content));
	if (wbytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
