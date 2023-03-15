#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _atoi - converts char to int
 * @s:string
 * Return:converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' '
			|| *s == '\t'
			|| *s == '\n'
			|| *s == '\r'
			|| *s == '\f'
			|| *s == '\v')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;

	}
	return (sign * result);
}

/**
 * main - program that adds positive numbers
 * @argc:number of arguments
 * @argv:array of arguments
 * Return:always 0
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i, j;
	char *s = NULL;

	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		for (j = 0; s[j] != '\0'; j++)
		{
			if (!isdigit(s[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += _atoi(s);
	}
	printf("%d\n", sum);
	return (0);
}
