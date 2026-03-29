#include "main.h"

void handle_rerr(const char *rfile);
void handle_werr(const char *wfile);

/**
 * main - run the code
 * @ac: argc
 * @av: argv
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
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
	ssize_t rbytes, wbytes;
	char buffer[1024];

	fdr = open(rfile, O_RDONLY);
	if (fdr == -1)
		handle_rerr(rfile);
	fdw = open(wfile, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdw == -1)
		handle_werr(wfile);
	rbytes = read(fdr, buffer, 1024);
	if (rbytes == -1)
		handle_rerr(rfile);
	while (rbytes > 0)
	{
		wbytes = write(fdw, buffer, rbytes);
		if (wbytes == -1)
			handle_werr(wfile);
		rbytes = read(fdr, buffer, 1024);
		if (rbytes == -1)
			handle_rerr(rfile);
	}
	cr = close(fdr);
	cw = close(fdw);
	if (cr == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
	if (cw == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
	if (cr == -1 || cw == -1)
		exit(100);
	return (1);
}

/**
 * handle_rerr - exit with 98
 */
void handle_rerr(const char *rfile)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", rfile);
	exit(98);
}

/**
 * handle_werr - exit with 97
 */
void handle_werr(const char *wfile)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", wfile);
	exit(99);
}
