#include "main.h"

/**
 * _strstr - Locates a substring within a string
 * @haystack: The string to search within
 * @needle: The substring to search for
 *
 * Return: A pointer to the first occurrence of the substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	size_t needle_llenn = strlen(needle);

	for (; *haystack; haystack++)
	{
		if (strncmp(haystack, needle, needle_llenn) == 0)
		{
			return (haystack);
		}
	}
	return (NULL);
}


