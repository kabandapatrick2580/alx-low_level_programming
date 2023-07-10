#include "main.h"

/**
 * get_endianness - function that checks endianness
 *
 * Return: 1 for little endian and 0 for big endian
 */
int get_endianness(void)
{
	int m_num = 1;
	char *ptr = (char *)&m_num;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
