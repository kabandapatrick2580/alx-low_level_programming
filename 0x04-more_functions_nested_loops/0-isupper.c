#include "main.h"

/**
 * _isupper - checking if it is lowercase
 * @c: c parameter
 * Return: if it is uppercase return 1 otherwise 0
 */
int _isupper(int c)
{
	if (c == 'A' && c <= 'Z')
	{
		return (1);
	}
		else
			return (0);
}