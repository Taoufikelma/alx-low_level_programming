#include "main.h"

/**
 * creat_file - main function that create file
 *
 * @filename: the name of file create
 * @text_content: the text to wr
 *
 * Return: on success return 1, 0 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int len = 0;

	if (filename == 0)
		return (-1);

	if (text_content != 0)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
