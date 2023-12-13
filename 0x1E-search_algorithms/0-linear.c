#include "search_algos.h"
/**
* linear_search - searching for a value in an array
* @array: array of integers
* @size: size of array
* @value: value of an array
* Return:returning -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t m;

	if (array == NULL)
	{
		return (-1);
	}

	for (m = 0; m < size; m++)
	{
		printf("Value checked array[%li] = [%i]\n", m, array[m]);
		if (array[m] == value)
		{
			return (m);
		}
	}
	return (-1);
}
