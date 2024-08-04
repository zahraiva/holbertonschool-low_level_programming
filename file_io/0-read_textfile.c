#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read a text file
 * @filename: name of a file
 * @letters: num of letters
 * Return: num of leeters it can read/print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a = malloc(letters);
	int fd, l;

	if (!filename || !a)
		return (0);
	fd = open(filename, O_RDONLY);
	l = read(fd, a, letters);
	if (l == -1)
		return (0);
	if (write(STDOUT_FILENO, a, l) == -1)
		return (0);
	close(fd);
	return (l);
}
