#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * i*_strdup - returns a pointer to newly allocated space in memory
 * @str:string
 * Return: newly allocatws string
 */
char *_strdup(char *str)
{
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}
	newstr = (char *) malloc(strlen(str) + 1);

	if (newstr == NULL)
	{
		return (NULL);
	}
	strcpy(newstr, str);
	return (newstr);
}
