#include "main.h"

/**
 * print_alphabet_x10 - Check the code
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int num;
	char let;

	for (num = 0; num <= 9; num++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
			_putchar('\n');
		}
	}
}

