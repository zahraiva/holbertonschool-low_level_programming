#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function for print 2d array
 *
 * @width: - width
 * @height: - height
 *
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
