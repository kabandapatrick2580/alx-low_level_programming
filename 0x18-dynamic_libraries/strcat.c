#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to be appended
 *
 * Return: A pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	char *dest_int = dest;

	while (*dest_int != '\0')
	{
		dest_int++;
	}

	while (*src != '\0')
	{
		*dest_int = *src;
		dest_int++;
		src++;
	}

	*dest_int = '\0';
	return (dest);
}
