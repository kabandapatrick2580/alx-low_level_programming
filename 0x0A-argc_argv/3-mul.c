#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s:string
 *
 * Return:the converted integer
 */
int _atoi(char *s)
{
	int k = 0;
	int sign = 1;
	int result = 0;

	while (s[k] == ' ' || s[k] == '\t' || s[k] == '\n')
	{
		k++;
	}
	if (s[k] == '-')
	{
		sign = -1;
		k++;
	}
	else if (s[k] == '+')
	{
		k++;
	}
	while (s[k] >= '0' && s[k] <= '9')
	{
		result = result * 10 + (s[k] - '0');
		k++;
	}
	return (sign * result);
}

/**
 * main - program multiplies two numbers
 * @argc:number of arguments
 * @argv:array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = _atoi(argv[1]);
	j = _atoi(argv[2]);
	mult = i * j;
	printf("%d\n", mult);
	return (0);
}
