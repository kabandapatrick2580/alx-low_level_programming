#include "search_algos.h"
/**
 * advanced_binary_recur - Recursive function to perform
 * advanced binary search.
 * @array: Pointer to the first element of the array to search in.
 * @g_left: Index of the left boundary.
 * @right_p: Index of the right boundary.
 * @value: The value to search for.
 *
 * Return: Index where 'value' is located, or -1 if not found.
 */
int advanced_binary_recur(int *array, size_t g_left, size_t right_p, int value)
{
	size_t m, mid;

	if (g_left > right_p)
		return (-1);

	printf("Searching in array: ");
	for (m = g_left; m <= right_p; m++)
	{
		if (m == right_p)
			printf("%d", array[m]);
		else
			printf("%d, ", array[m]);
	}
	printf("\n");

	mid = (g_left + right_p) / 2;

	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
			return (advanced_binary_recur(array, g_left, mid, value));
		return ((int)mid);
	}
	else if (array[mid] < value)
		return (advanced_binary_recur(array, mid + 1, right_p, value));
	else
		return (advanced_binary_recur(array, g_left, mid - 1, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array using
 * Advanced Binary Search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index where 'value' is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recur(array, 0, size - 1, value));
}
