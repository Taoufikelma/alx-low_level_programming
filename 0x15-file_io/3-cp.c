#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * open_fil - function
 *
 * @filename: filename.
 * @mode: the mode.
 * @permission: permission.
 *
 * Return: 0
 */

int open_fil(const char *filename, int mode, mode_t permission);

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to;
	ssize_t r, w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open_fil(argv[1], O_RDONLY, 0664);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open_fil(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
	{
	w = write(to, buffer, r);
	if (w == -1 || w != r)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(from) == -1 || close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from == -1 ? to : from);
		exit(100);
	}

	return (0);
}

/**
 * open_fil - function
 *
 * @filename: filename.
 * @mode: the mode.
 * @permission: permission.
 *
 * Return: 0
 */

int open_fil(const char *filename, int mode, mode_t permission)
{
	return (open(filename, mode, permission));
}

