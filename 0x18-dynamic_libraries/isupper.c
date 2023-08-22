#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @n: The character to be checked
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int n)
{
	if (n >= 65 && n <= 90)
	{
		return (1);
	}
	return (0);
}
