#include "main.h"

/**
 * flip_bits - this function flip bits
 * @n: number
 * @m: number
 *
 * Return: flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int counter = 0;

	result = n ^ m;
	while (result != 0)
	{
		counter += result & 1;
		result >>= 1;

	}
	return (counter);
}
