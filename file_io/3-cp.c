#include "main.h"

/**
 * main - run the code
 * @ac: argc
 * @av: argv
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	res = readf_writef(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}

/**
 * readf_writef - reads a text file and writes to file
 * @rfile: name of file to read (not null)
 * @wfile: name of file to which to write (not null)
 *
 * Return: 1 if successful, 0 otherwise
 */
int readf_writef(const char *rfile, const char *wfile)
{
	int fdr, fdw, cr, cw;
	ssize_t rbytes;
	char buffer[1024];

	fdr = open(rfile, O_RDONLY);
	if (fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", rfile);
		exit(98);
	}

	fdw = open(wfile, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", wfile);
		exit(99);
	}

	rbytes = read(fdr, buffer, 1024);
	while (rbytes > 0)
	{
		write(fdw, buffer, rbytes);
		if (write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", wfile);
			exit(99);
		}

		rbytes = read(fdr, buffer, 1024);
	}

	cr = close(fdr);
	cw = close(fdw);

	if (cr)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cr);
	if (cw)
		dprintf(STDERR_FILENO, "Error: Can't clode fd %d\n", cw);
	if (cr || cw)
		exit(100);
	return (1);
}
