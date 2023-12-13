#include "search_algos.h"
#include <math.h>

/**
 * jump_search - performing jump search algorithm
 * @array: array of elements to search from
 * @size: size of array
 * @value: value of array
 * Return: returns -1 on sucess
 */
int jump_search(int *array, size_t size, int value)
{
	size_t  numb_prev, cur_bot, m;

	numb_prev = 0;
	cur_bot = 0;
	m = 0;

	if (array != NULL)
	{
		while (cur_bot < size && array[cur_bot] < value)
		{
			numb_prev = cur_bot;
			cur_bot = cur_bot + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n", numb_prev, array[numb_prev]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n", numb_prev, cur_bot);

		for (m = numb_prev; m <= cur_bot; m++)
		{
			if (m < size)
			{
				printf("Value checked array[%lu] = [%d]\n", m, array[m]);
				if (array[m] == value)
				{
				return (m);
				}
			}
		}
	}

	return (-1);
}
