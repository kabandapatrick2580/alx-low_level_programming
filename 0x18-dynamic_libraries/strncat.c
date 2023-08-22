#include "main.h"

/**
 * _strncat - Concatenates two strings, but with a length limit
 * @dest: The destination string
 * @src: The source string to be appended
 * @n: The maximum number of characters to append from src
 *
 * Return: A pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_long = strlen(dest);
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[dest_long + a] = src[a];
	}
	dest[dest_long + a] = '\0';
	return (dest);
}
