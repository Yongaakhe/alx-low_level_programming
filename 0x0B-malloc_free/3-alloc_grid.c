#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **output;

	if (width <= 0 || height <= 0)
		return (NULL);
	output = malloc(sizeof(int *) * height);
	if (output == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		output[i] = malloc(sizeof(int) * width);
		if (output[i] == NULL)
		{
			for (j = 0; j <= 0 ; j++)
				free(output[i]);
			free(output);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
			output[i][j] = 0;

	}
	return (output);
}
