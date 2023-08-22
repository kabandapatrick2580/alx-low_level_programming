#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest:destination
 * @src:source
 * @n:integer
 * Return:pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int q;

	for (q = 0; q < n && src[q] != '\0'; q++)
	{
		dest[q] = src[q];
	}
	for (; q < n; q++)
	{
		dest[q] = '\0';
	}
	return (dest);
}
