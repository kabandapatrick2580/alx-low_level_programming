#include "main.h"

/**
 * set_bit - sets value of bit at a given index
 * @n: number
 * @index: indexes
 *
 * Return: bit value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	*n |= (1 << index);
	return (1);
}
