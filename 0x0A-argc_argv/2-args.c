#include "main.h"
#include <stdio.h>

/**
 * main - prints all the aruments content
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
