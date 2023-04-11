#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **ml;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	ml = malloc(sizeof(int *) * height);

	if (ml == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ml[a] = malloc(sizeof(int) * width);

		if (ml[a] == NULL)
		{
			for (; a >= 0; a--)
				free(ml[a]);

			free(ml);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			ml[a][b] = 0;
	}

	return (ml);
}
