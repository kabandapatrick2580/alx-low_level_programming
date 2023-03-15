#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts string to int
 * @s:string
 * Return:converted int
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int n = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		n = n * 10 + (s[i] - '0');
		else
			break;
	}
	return (sign * n);
}

/**
 * main - prints minimum number of coins
 * @argc:number of arguments
 * @argv:array of arguments
 * Return:always 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int cents = 0;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins += cents / 25;
	cents %= 25;
	coins += cents / 10;
	cents %= 10;
	coins += cents / 5;
	cents %= 5;
	coins += cents / 2;
	cents %= 2;
	coins += cents;

	printf("%d\n", coins);

	return (0);
}
