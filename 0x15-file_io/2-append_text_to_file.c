#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: a pointer to the filename
 * @text_content: the text content .
 *
 * Return: 1 on success.
 *	-1 if it fails
 *	or if the file does not exist.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int w, o, i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
