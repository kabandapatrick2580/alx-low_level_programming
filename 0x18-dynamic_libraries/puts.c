#include "main.h"

/**
 * _puts - Writes a string to stdout followed by a newline
 * @s: The string to be written
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
