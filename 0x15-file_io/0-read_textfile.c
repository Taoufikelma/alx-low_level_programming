#include "main.h"

/**
 * read_textfile - main fnuction that read text in file and print it
 *
 * @filename: the name of file
 * @letters: the number of byte to read
 *
 * Return: return the number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t r, w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
