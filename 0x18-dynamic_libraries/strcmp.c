#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1:the string 1
 * @s2:the string 2
 * Return:strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
