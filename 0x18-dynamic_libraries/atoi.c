#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int m = 0;
	int p = 0;
	int n = 0;
	int len = 0;
	int f = 0;
	int dig_it = 0;

	while (s[len] != '\0')
		len++;

	while (m < len && f == 0)
	{
		if (s[m] == '-')
			++p;
		if (s[m] >= '0' && s[m] <= '9')
		{
			dig_it = s[m] - '0';
			if (p % 2)
				dig_it = -dig_it;
			n = n * 10 + dig_it;
			f = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			f = 0;
		}
		m++;
	}
	if (f == 0)
		return (0);
	return (n);
}

