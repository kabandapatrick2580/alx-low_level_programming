#include<stdio.h>
/**
* main - Entry point
*
* Description: this Function prints all the letters except 'q' and 'e'
* f the alphabet
*
* Return: 0 always (success)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}

