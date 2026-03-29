#include "main.h"

/**
 * append_text_to_file - add text to file
 * @filename: name of file
 * @text_content: null terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wbytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
