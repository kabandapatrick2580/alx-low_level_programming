#include "search_algos.h"
#include <stdio.h>



/**
 * own_binary_search - Search for a value in a sorted array using Binary Search
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index where 'value' is located, or -1 if not found.
 */
int own_binary_search(int *array, size_t size, int value)
{
	size_t get_left = 0;
	size_t right_put = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (get_left <= right_put)
	{
		size_t m;

		printf("Searching in array: ");
		for (m = get_left; m <= right_put; m++)
		{
			if (m == right_put)
				printf("%d", array[m]);
			else
				printf("%d, ", array[m]);
		}
		printf("\n");

		mid = (get_left + right_put) / 2;

		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] < value)
			get_left = mid + 1;
		else
			right_put = mid - 1;
	}

	return (-1);
}
/**
 * exponential_search - Searches for a value in a sorted array using
 * Exponential Search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index where 'value' is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bind_t = 1;

	if (array == NULL || size == 0)
		return (-1);

	while (bind_t < size && array[bind_t] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bind_t, array[bind_t]);
		bind_t *= 2;
	}

	if (bind_t >= size)
	{
		printf("Value checked array[%lu] is out of range\n", bind_t / 2);
		return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", bind_t / 2, bind_t);


	return (own_binary_search(array + (bind_t / 2), size - (bind_t / 2), value));
}
