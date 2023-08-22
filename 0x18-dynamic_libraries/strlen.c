#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int leng_th = 0;

	while (*s != '\0')
	{
		leng_th++;
		s++;
	}
	return (leng_th);
}
