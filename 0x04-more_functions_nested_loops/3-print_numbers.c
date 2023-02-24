#include "main.h"
/**
 * print_numbers - print numbers form 0 to 9
 *
 * return: numbers
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
