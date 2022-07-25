#include "main.h"

/**
 * read_textfile - reads a text file amd prints it to the
 * POSIX standard output
 * @filename: the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it should read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wrt;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	rd = read(fd, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	close(fd);
	free(buf);

	return (wrt);
}
