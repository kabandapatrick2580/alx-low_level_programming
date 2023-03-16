#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min:minimum integer
 * @max:maximum integer
 * Return:array of integers from min to max
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
