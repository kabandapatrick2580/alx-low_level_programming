#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string of any set of byte
 * @s:string
 * @accept:character
 * Return:string
 */
char *_strpbrk(char *s, char *accept)
{
	char *pptr;

	while (*s != '\0')
	{
		pptr = accept;

		while (*pptr != '\0')
		{
			if (*s == *pptr)
			{
				return (s);
			}
			pptr++;
		}
		s++;
	}
	return (NULL);
}
