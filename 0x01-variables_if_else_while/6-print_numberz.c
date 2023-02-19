#include <stdio.h>

/**
 * main -  Entry point
 *
 * Descrption: prints all single digit numbers of base 10 from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar(b + '0');
	}
	putchar('\n');
	return (0);
}

