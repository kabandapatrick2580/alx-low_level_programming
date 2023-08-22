#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0 through 9)
 * @n: The character to be checked
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	return (0);
}
