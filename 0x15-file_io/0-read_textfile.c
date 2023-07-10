#include "main.h"

/**
 * read_textfile - main fnuction that read text in file and print it
 *
 * @filename: the name of file
 * @letters: the number of byte to read
 *
 * Return: return the number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	char *buf;
	int fd;
	ssize_t bytes;

	if (!filename || letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	bytes = read(fd, buf, letters);
	bytes = write(STDOUT_FILENO, buf, bytes);

	free(buf);
	close(fd);
	return (bytes);
}
