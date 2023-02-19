#include <stdio.h>
/**
* main - Entry point
* return: 0 ALways (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	char ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
