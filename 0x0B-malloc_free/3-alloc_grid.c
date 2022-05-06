#include "main.h"
/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer..
 */
int **alloc_grid(int width, int height)
{
int **s, u, v;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (NULL);
	}

	for (u = 0; u < height; u++)
	{
		s[u] = malloc(sizeof(int) * width);

		if (s[u] == NULL)
		{
			for (; u >= 0; u--)
			{
				free(s[u]);
			}
			free(s);
			return (NULL);
		}

		for (v = 0; v <= width; v++)
		{
			s[u][v] = 0;
		}
	}
	return (s);

}
