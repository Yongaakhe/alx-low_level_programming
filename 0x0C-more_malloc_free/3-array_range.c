#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: first array
 * @max: second array
 * Return: NULL or a pointer to the new array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min++;
	return (array);
}
