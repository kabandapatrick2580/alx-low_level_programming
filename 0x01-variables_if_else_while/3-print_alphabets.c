#include <stdio.h>
/**
* main - Entry point
*
* Description: This funtion prints thr alphabet in lowecase and uppercase
*
* Return: 0 ALways (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	char chh = 'A';

	while (chh <= 'Z')
	{
		putchar(chh);
	}
	putchar('\n');

	return (0);
}
