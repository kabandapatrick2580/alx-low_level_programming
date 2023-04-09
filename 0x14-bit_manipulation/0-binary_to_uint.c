#include "main.h"

/**
 * binary_to_uint - changes binary into unsigned int
 * @b: character of '0' or '1'
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x  = 0, i;

	if (b == NULL)
	{
		return (0);
	}
	for (i  = 0; i < strlen(b); i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		x = x * 2 + (b[i] == '1' ? 1 : 0);
	}
	return (x);
}
