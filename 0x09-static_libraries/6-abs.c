#include "main.h"

/**
 * _abs - computes absolute value
 * @c: number
 *
 * Return: absolute value or zero
 */
int _abs(int c)
{
	int abs;

	if (c < 0)
	{
		abs = c * -1;
		return (abs);
	}
	return (c);
}
