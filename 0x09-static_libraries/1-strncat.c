#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings
 * @dest:destination
 * @src:source
 * @n:integer
 * Return:pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[dest_len + a] = src[a];
	}
	dest[dest_len + a] = '\0';
	return (dest);
}
