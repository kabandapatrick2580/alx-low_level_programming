#include "main.h"

/**
 * *_strcpy - copy a string pointed
 * @dest:destination
 * @src:source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
