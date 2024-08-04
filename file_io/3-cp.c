#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - copy one file to another
 * @argc: count of args
 * @argv: array to pointers to args
 * Return: 0
 */
int main(int argc, char **argv)
{
int red, wed, rfile, wfile, cl;
	char *buffer;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	rfile = open(argv[1], O_RDONLY);
	red = read(rfile, buffer, 1024);
	wfile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (rfile < 0 || red < 0)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), free(buffer), exit(98);
		wed = write(wfile, buffer, red);
		if (wfile < 0 || wed < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]), free(buffer), exit(99);
		red = read(rfile, buffer, 1024);
		wfile = open(argv[2], O_WRONLY | O_APPEND);
	} while (red > 0);
	free(buffer);
	cl = close(rfile);
	if (cl < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", rfile), exit(100);
	cl = close(wfile);
	if (cl < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", wfile), exit(100);
	return (0);
}
