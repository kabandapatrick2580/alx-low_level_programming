#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two string
 * @s1:string 1
 * @s2:string 2
 * @n:number of bytes
 * Return:conactenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc_str;
	 unsigned int q;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	q = strlen(s1) + n;
	conc_str = malloc(q + 1);
	if (conc_str == NULL)
	{
		return (NULL);
	}
	memcpy(conc_str, s1, strlen(s1));
	memcpy(conc_str + strlen(s1), s2, n);
	conc_str[q] = '\0';

	return (conc_str);
}
