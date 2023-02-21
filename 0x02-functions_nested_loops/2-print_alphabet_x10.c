#include <main.h>

/**
 * print_alphabet_x10 - Check the code
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int counter;
	char letter;

	for (counter = 0; counter <= 9; counter++)
	{
		for (letter = 'a'; counter <= 'z'; counter++)
		{
			_putchar(letter);
		}
	}
}

