#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - 2d int Zay creation
 * @width: width
 * @height: height
 * Return: pointer to the 2d Zay otherwise null
 */
int **alloc_grid(int width, int height)
{
	int x = 0;
	int y = 0;
	int **Z;

	if (height <= 0 || width <= 0)
		return (NULL);

	Z = (int **) malloc(sizeof(int *) * height);

	if (Z == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		Z[x] = (int *) malloc(sizeof(int) * width);
		if (Z[x] == NULL)
		{
			free(Z);
			for (y = 0; y <= x; y++)
				free(Z[y]);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			Z[x][y] = 0;
		}
	}
	return (Z);
}
