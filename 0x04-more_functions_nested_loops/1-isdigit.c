#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to check digits
 *
 * Return: 1 if digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	return (0);
}
