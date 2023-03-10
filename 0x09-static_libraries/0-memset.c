#include "main.h"

/**
 * *_memset - fills the memory with constant byte
 * @s:memory area
 * @b:byte
 * @n:number
 * Return:memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
