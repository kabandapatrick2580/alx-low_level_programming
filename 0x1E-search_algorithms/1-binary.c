#include "search_algos.h"
/**
 * binary_search - searches a value in sorted array
 * @array: array size
 * @size: size of an array
 * @value: value of the array
 * Return: returning -1 for successful
 */
int binary_search(int *array, size_t size, int value)
{
	int o = 0, p = size - 1;
	int mid_dir, m;

	if (array == NULL)
	{
		return (-1);
	}

	while (o <= p)
	{
		mid_dir = o + (p - o) / 2;

		printf("Searching in array: ");
		for (m = o; m < p; m++)
		{
			printf("%d, ", array[m]);
		}
		printf("%d\n", array[p]);

		if (array[mid_dir] == value)
		{
			return (mid_dir);
		}
		else if (array[mid_dir] < value)
		{
			o = mid_dir + 1;
		}
		else
		{
			p = mid_dir - 1;
		}
	}
	return (-1);
}
