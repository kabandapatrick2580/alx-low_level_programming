#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two string
 * @s1:first string
 * @s2:second string
 * Return:concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *conc_str;
	int q;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	q = strlen(s1) + strlen(s2);

	conc_str = malloc(q + 1);

	if (conc_str == NULL)
	{
		return (NULL);
	}
	strcpy(conc_str, s1);
	strcpy(conc_str + strlen(s1), s2);
	conc_str[q] = '\0';

	return (conc_str);
}
