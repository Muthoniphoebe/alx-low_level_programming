#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string to be measured.
 *
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - checks if a string is a palindrome
 * @s: The string to be checked.
 * @l: The length of s.
 *
 * Return: 1 if is, 0 if not.
 */

int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked.
 *
 * Return: -1 if it is, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
