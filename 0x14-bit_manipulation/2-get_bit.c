#include "main.h"

/**
 * get_bit - function that  returns value of bit at any index
 * @n: number
 * @index: index of the bit
 *
 * Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	if (index == 0)
	{
		b = n & 1;
		return (b);
	}
	b = get_bit(n >> 1, index - 1);
	return (b);
}
