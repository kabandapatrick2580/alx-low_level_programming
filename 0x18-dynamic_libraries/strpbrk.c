#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to search for
 *
 * Return: A pointer to the first occurrence in s of any byte
 * from the accept string, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ppointer;

	while (*s != '\0')
	{
		ppointer = accept;

		while (*ppointer != '\0')
		{
			if (*s == *ppointer)
			{
				return (s);
			}
			ppointer++;
		}
		s++;
	}
	return (NULL);
}
