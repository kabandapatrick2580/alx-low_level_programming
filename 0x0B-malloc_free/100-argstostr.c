#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenayes string
 * @ac:string 1
 * @av:string 2
 * Return:concatenated string
 */
char *argstostr(int ac, char **av)
{
	int total = 0;
	char *str;
	int i, length;
	int offset = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total += strlen(av[i]) + 1;
	}

	str = malloc(total * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		length = strlen(av[i]);
		strncpy(str + offset, av[i], length);
		str[offset + length] = '\n';
		offset += length + 1;
	}
	return (str);
}
