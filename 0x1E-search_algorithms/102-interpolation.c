#include "search_algos.h"
/**
 * interpolation_search - searching algorithm using interpolation
 * @array: array to search from
 * @size: size of array
 * @value: value of the array
 * Return: returns -1 if succeeded
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t put_low, put_high, point_on_s;

	put_high = size - 1;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (put_low <= put_high && value >= array[put_low] && value <= array[put_high])
	{
		point_on_s = put_low + (((double)(put_high - put_low) / (array[put_high] - array[put_low])) *
				(value - array[put_low]));
		printf("Value checked array[%lu] = [%d]\n", point_on_s, array[point_on_s]);

		if (array[point_on_s] == value)
		{
			return (point_on_s);
		}

		if (array[point_on_s] < value)
		{
			put_low = point_on_s + 1;
		}
		else
		{
			put_high = point_on_s - 1;
		}
	}
	return (-1);
}
