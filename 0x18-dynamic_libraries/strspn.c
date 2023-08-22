#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The characters to match
 *
 * Return: The number of bytes in the initial segment of s
 * which are characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int compte, a, x;

	compte = 0;
	for (a = 0; s[a]; a++)
	{
		for (x = 0; accept[x]; x++)
		{
			if (s[a] == accept[x])
			{
				compte++;
				break;
			}
		}
		if (!accept[x])
		{
			break;
		}
	}
	return (compte);
}
