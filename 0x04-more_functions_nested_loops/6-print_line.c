#include "main.h"

/**
 * print_line - entry code
 * @n: parameter to be used
 * return: whatever deserves to be returned
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
			return;
	}
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
