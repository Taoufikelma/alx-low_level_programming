#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: return s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		s = malloc(sizeof(char) * (length1 + n + 1));
	else
		s = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!s)
		return (NULL);

	while (a < length1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < length2 && a < (length1 + n))
		s[a++] = s2[b++];

	while (n >= length2 && a < (length1 + length2))
		s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}
