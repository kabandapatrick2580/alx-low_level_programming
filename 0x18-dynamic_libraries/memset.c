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
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		s[d] = b;
	}
	return (s);
}
