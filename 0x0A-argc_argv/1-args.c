#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of args
 * @argv: argument vectot
 * @argc: rgument count
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
