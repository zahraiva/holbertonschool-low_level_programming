#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text to the file
 * @filename: name of the file
 * @text_content: content to write
 * Return: num of letters
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		len = strlen(text_content);
		if (write(fd, text_content, len) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
