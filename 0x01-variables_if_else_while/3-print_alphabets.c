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
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch)
	putchar('\n');

	return (0);
}
