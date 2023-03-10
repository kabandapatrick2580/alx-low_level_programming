#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest:destination
 * @src:source
 * Return:pointer
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	*dest_end = '\0';
	return (dest);
}
