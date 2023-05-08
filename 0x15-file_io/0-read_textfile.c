#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that can read text file and print to STDOUT.
 * @filename: a string containing the name of the text file to be read.
 * @letters: an integer sprecifying the number of letters to be read.
 * Return: the number of bytes read and printed
 *	or 0 if the function fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fl;
	ssize_t fp, a, b;

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	fl = malloc(sizeof(char) * letters);
	b = read(fp, fl, letters);
	a = write(STDOUT_FILENO, fl, b);

	free(fl);
	close(fp);
	return (a);
}

