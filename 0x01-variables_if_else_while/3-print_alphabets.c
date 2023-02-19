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
	char ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
