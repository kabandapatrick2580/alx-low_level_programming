#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if c is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	return (_islower(c) || _isupper(c));
}

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer.
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	return ((n < 0) ? -n : n);
}

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string.
 * @s: The string.
 *
 * Return: The length of the string
