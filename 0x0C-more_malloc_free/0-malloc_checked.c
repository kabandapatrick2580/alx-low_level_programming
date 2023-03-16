#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b:allocated value to memory
 * Return:value
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
