#include "main.h"

/**
 * _strlen - return length of string
 * @str: string
 *
 * Return: length
 */

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - checks if string is a palindrome
 * @l: left index
 * @r: right index
 * @p: palindrome
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_palindrome(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (check_palindrome(l + 1, r - 1, p));
}

/**
 * is_palindrome - states if a string is a palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
