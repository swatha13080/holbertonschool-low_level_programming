#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of file
 * @letters: number of letters to read
 *
 * Return: number of letters written if successful, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t rbytes, wbytes;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	rbytes = read(fd, buffer, letters);
	if (rbytes < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	wbytes = write(1, buffer, rbytes);
	if (wbytes < 0 || wbytes != rbytes)
	{
		close(fd);
		free(buffer);
		return (wbytes < 0 ? 0 : wbytes);
	}

	close(fd);
	free(buffer);
	return (wbytes);
}
