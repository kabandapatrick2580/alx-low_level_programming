#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * *_strstr - locates a substring
 * @haystack:string
 * @needle:substring
 * Return: substring
 */
char *_strstr(char *haystack, char *needle)
{
	size_t needle_len = strlen(needle);

	for (; *haystack; haystack++)
	{
		if (strncmp(haystack, needle, needle_len) == 0)
		{
			return (haystack);
		}
	}
	return (NULL);
}
