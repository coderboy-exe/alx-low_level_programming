#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file to be appended to
 * @text_content: a NULL terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, wrt;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (i = 0; i < text_content[i]; i++)
		;

	wrt = write(fd, text_content, i);

	if (wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
