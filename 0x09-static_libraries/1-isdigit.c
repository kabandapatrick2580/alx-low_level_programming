#include "main.h"

/**
 * _isdigit - checks a digit
 * @c: digit
 * Return: 1 for a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
